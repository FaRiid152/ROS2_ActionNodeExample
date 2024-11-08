from flask import Flask, request, jsonify
import logging

class APIServer:
    def __init__(self):
        # Initialize Flask app
        self.app = Flask(__name__)

        # Mission data storage (in-memory)
        self.mission_data = {}

        # Set up logging
        logging.basicConfig(level=logging.INFO)

        # Set up the routes
        self.app.add_url_rule('/mission', 'post_mission', self.post_mission, methods=['POST'])
        self.app.add_url_rule('/mission', 'get_mission', self.get_mission, methods=['GET'])

    def post_mission(self):
        """
        Endpoint to handle POST requests for mission data.
        Accepts JSON with 'mission_id' and 'mission_details'.
        """
        data = request.get_json()

        # Validate JSON data
        if not data or 'mission_id' not in data or 'mission_details' not in data:
            return jsonify({"error": "Invalid mission data"}), 400

        # Validate that mission_details is a dictionary
        if not isinstance(data['mission_details'], dict):
            return jsonify({"error": "Invalid mission details format"}), 400

        # Store the mission data using mission_id as the key
        mission_id = data['mission_id']
        self.mission_data[mission_id] = data['mission_details']

        logging.info(f"Mission {mission_id} data stored.")
        return jsonify({"message": "Mission data received", "mission_id": mission_id}), 200

    def get_mission(self):
        """
        Endpoint to handle GET requests to retrieve all mission data.
        """
        logging.info("Fetching mission data.")
        return jsonify({"missions": self.mission_data}), 200

    def run(self, debug=True, port=5000):
        """
        Run the Flask app.
        """
        logging.info(f"Starting API server on port {port}...")
        self.app.run(debug=debug, port=port, threaded=True)

# Instantiate and run the server
if __name__ == '__main__':
    server = APIServer()
    server.run()
