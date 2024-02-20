from rclpy.node import Node
try:
    from terasim_com.redis_client.redis_client import redis_client
    print("successfully import redis client from terasim communication")
except:
    print("terasim communication is not installed")
    import redis
    import os

    redis_host = os.environ.get("TERASIM_REDIS_HOST", 'localhost')
    redis_port = os.environ.get("TERASIM_REDIS_PORT", 6379)
    redis_password = os.environ.get("TERASIM_REDIS_PASSWORD", "")

    redis_client = redis.Redis(host=redis_host, port=redis_port, db=0, password=redis_password)

class BasicRosRedisComNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.redis_client = redis_client