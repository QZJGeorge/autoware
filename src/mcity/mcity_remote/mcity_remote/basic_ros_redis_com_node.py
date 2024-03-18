import os
import redis

from rclpy.node import Node

redis_host = os.environ.get("TERASIM_REDIS_HOST", 'localhost')
redis_port = os.environ.get("TERASIM_REDIS_PORT", 6379)
redis_password = os.environ.get("TERASIM_REDIS_PASSWORD", "")

redis_client = redis.Redis(host=redis_host, port=redis_port, db=0, password=redis_password)

class BasicRosRedisComNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.redis_client = redis_client