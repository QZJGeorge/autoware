import time
from terasim_redis_connector.redis_client import create_redis_client
import terasim_redis_connector.constants as constants

local_redis = create_redis_client(mode="local")
remote_redis = create_redis_client(mode="remote")

keys_list = [constants.AV_CONTEXT, constants.AV_STATE]

time_resolution = 0.1

while True:
    t0 = time.time()
    results = local_redis.mget(keys_list)

    # Check for None values in results
    if None in results:
        print("Warning: One or more keys have None values.")
    else:
        # Proceed with setting the keys in remote_redis only if all values are non-None
        remote_redis.mset({k: v for k, v in zip(keys_list, results) if v is not None})

    duration = time.time() - t0
    if duration < time_resolution:
        time.sleep(time_resolution - duration)
