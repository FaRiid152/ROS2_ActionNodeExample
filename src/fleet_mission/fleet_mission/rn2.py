import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from mission_action.action import MissionAction

class MissionActionServer(Node):
    def __init__(self):
        super().__init__('mission_action_server')
        self._action_server = ActionServer(self, MissionAction, 'mission_action', self.execute_callback)
        self.get_logger().info('Action server initialized and waiting for goals...')

    def execute_callback(self, goal_handle):
        # Log the mission ID and details
        self.get_logger().info(f'Received goal: {goal_handle.request.mission_id}, {goal_handle.request.mission_details}')
        
        mission_id = goal_handle.request.mission_id
        mission_details = goal_handle.request.mission_details
        
        self.get_logger().info(f"Executing mission {mission_id} with details: {mission_details}")

        # Prepare the result message
        result_msg = MissionAction.Result()
        result_msg.success = True
        result_msg.message = f"Mission {mission_id} executed successfully"
        
        # Complete the goal successfully
        goal_handle.succeed()
        return result_msg

def main(args=None):
    rclpy.init(args=args)
    action_server = MissionActionServer()
    
    action_server.get_logger().info('Action server is spinning...')
    rclpy.spin(action_server)
    
    action_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
