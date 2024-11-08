import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from mission_action.action import MissionAction
import requests  # For making GET requests
import json
import time

class MissionActionClient(Node):
    def __init__(self):
        super().__init__('mission_action_client')
        self._action_client = ActionClient(self, MissionAction, 'mission_action')

    def send_goal(self, mission_id: str, mission_details: dict):
        if not self._action_client.wait_for_server(timeout_sec=10.0):
            self.get_logger().error('Action server not available')
            return
        
        goal_msg = MissionAction.Goal()
        goal_msg.mission_id = mission_id
        
        # Ensure mission details are correctly formatted as a JSON string
        try:
            goal_msg.mission_details = json.dumps(mission_details)  # Convert dict to JSON string
        except Exception as e:
            self.get_logger().error(f"Error serializing mission details: {e}")
            return

        self.get_logger().info(f'Sending goal: Mission ID: {mission_id}, Mission Details: {goal_msg.mission_details}')
        goal_handle_future = self._action_client.send_goal_async(goal_msg)
        goal_handle_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if goal_handle.accepted:
            self.get_logger().info(f"Goal accepted, waiting for result...")
            result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, result_future)
            result = result_future.result()
            self.get_logger().info(f"Result: {result.success}, Message: {result.message}")
        else:
            self.get_logger().error("Goal was rejected!")

    def fetch_missions(self):
        try:
            response = requests.get('http://localhost:5000/mission')  # Replace with your API endpoint
            if response.status_code == 200:
                data = response.json()
                missions = data.get('missions', {})
                for mission_id, mission_details in missions.items():
                    self.get_logger().info(f"Mission: {mission_id}")
                    self.send_goal(mission_id, mission_details)  # Pass mission details
            else:
                self.get_logger().error("Failed to fetch missions")
        except Exception as e:
            self.get_logger().error(f"Error fetching missions: {str(e)}")

def main(args=None):
    rclpy.init(args=args)
    client = MissionActionClient()

    while rclpy.ok():
        client.fetch_missions()  # Poll the API
        time.sleep(1)  # Wait for 1 second before fetching again

    rclpy.spin(client)
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
