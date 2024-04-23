import os
import redis
from rclpy.node import Node

redis_host = os.environ.get("TERASIM_REDIS_HOST", 'localhost')
redis_port = os.environ.get("TERASIM_REDIS_PORT", 6379)
redis_password = os.environ.get("TERASIM_REDIS_PASSWORD", "")

local_redis = redis.Redis(host="localhost", port=6379, db=0, password="")
remote_redis = redis.Redis(host=redis_host, port=redis_port, db=0, password=redis_password)

class BasicRosRedisComNode(Node):
    def __init__(self, node_name, mode):
        super().__init__(node_name)

        if mode == "local":
            self.redis_client = local_redis
        elif mode == "remote":
            self.redis_client = remote_redis