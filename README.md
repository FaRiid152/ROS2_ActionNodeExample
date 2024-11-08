## Overview

This Project provides a way to manage and execute missions using a REST API and ROS 2 action servers. It involves:
1. A REST API for mission management where users can post and retrieve mission details.
2. Two ROS 2 nodes:
   - **Node 1 (RN1)**: Fetches mission data from the REST API, processes it, and sends it to a ROS 2 action server.
   - **Node 2 (RN2)**: Hosts the ROS 2 action server, receives mission data from RN1, and prints mission details upon execution.

### Project Structure

- **REST API**: Built with Flask, provides POST and GET endpoints for mission management.
- **RN1 (ROS 2 Node 1)**: Runs an action client to fetch and send missions to RN2.
- **RN2 (ROS 2 Node 2)**: Runs an action server to receive and print mission details.

### Features

- **REST API for mission management**: Accepts mission details and provides access to stored missions.
- **ROS 2 Action Client (RN1)**: Fetches mission data from the API and sends it as a ROS action.
- **ROS 2 Action Server (RN2)**: Receives mission data and logs mission details to the console.
