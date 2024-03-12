import os
import json
import time
import redis
import requests

import rclpy
from rclpy.node import Node


class McityLight(Node):
    # Website where the signal information can be obtained
    server = os.environ.get("MCITY_OCTANE_SERVER", 'https://mcity.um.city/api')
    api_key = os.environ.get("MCITY_OCTANE_KEY", 'qbTx6kLjes')

    # Other constants which are helpful to encode the original signal timing plan
    signals_constants = {
        "NODE_18": {"intersection_name": "Liberty/State", "phase_order": [2,4,6,8], "sumo_light":[["Gg","yy","rr"]]*4},
        'NODE_12': {"intersection_name": "Liberty/Wolverine", "phase_order": [2,6,4], "sumo_light":[["G","y","r"],["Gg","yy","rr"],["G","y","r"]]},
        'NODE_11': {"intersection_name": "Main/Wolverine", "phase_order": [1,8,2,5,4,6], "sumo_light":[["g","y", "r"],["Gg","yy","rr"],["G","y","r"],["G","y","r"],["Gg","yy","rr"],["G","y","r"]]},
        'NODE_17': {"intersection_name": "Main/State", "phase_order": [6,1,8,3,2,5,4,7], "sumo_light":[["G","y","r"]]*6+[["GG","yy","rr"]]+[["G","y","r"]]},
        'NODE_23': {"intersection_name": "Main/Pontiac", "phase_order": [2,4,6], "sumo_light":[["Gg","yy","rr"],["G","y","r"],["G","y","r"]]},
        'NODE_24': {"intersection_name": "Liberty/Pontiac", "phase_order": [2,4,2], "sumo_light":[["Gg","yy","rr"],["G","y","r"],["G","y","r"]]},
    }
    state2int_sumo = {
        'r':1, 'y':2, 'g':3, 'G':4
    }
    state2int_web = {
        'green':0, 'yellow':1, 'red':2 
    }

    def __init__(self, host='localhost', port=6379, db=0):
        super().__init__('mcity_light')

        redis_host = os.environ.get("TERASIM_REDIS_HOST", 'localhost')
        redis_port = os.environ.get("TERASIM_REDIS_PORT", 6379)
        redis_password = os.environ.get("TERASIM_REDIS_PASSWORD", "")

        self.redis_client = redis.Redis(host=redis_host, port=redis_port, db=0, password=redis_password)
        
        self._update_time = -1
        self._thread_list = []

        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self._update_signal_from_web)

        print("Successfully initialize McityLight!")

    def _update_signal_from_web(self):
        """Obtain signal information from Website and update the shared variables.
        """        
        headers = {'accept': 'application/json', 'X-API-KEY': self.api_key}
        # while 1:
        try:
            response = requests.get(self.server + '/intersections', headers=headers)
            try:
                # data = json.loads(response.text)
                data = response.json()
                # json.dump(data, open("signal.json", "w"), indent=4)
                # break
            except:
                print(f'JSON decode error: {response.text}')
                # exit()
            states = self._extract_signal(data)
            cur_t = time.time()
            if cur_t > self._update_time:
                self.redis_client.set("field_traffic_lights", json.dumps(states))
                self._update_time = cur_t
            # time.sleep(0.1)
        except:
            print("Failed to receive signal information")

    @staticmethod
    def _extract_signal(json_obj):
        """Extract signal timing plan of all intersections from the Website.

        Args:
            json_obj (dict): All information of the studied intersections, including position and signal timing plan.

        Returns:
            str: Signal timing plan of all intersections in the format of string, which can be parsed by SUMO.
        """        
        tls_dict = {}
        for signal_id in McityLight.signals_constants:
            tls_dict[signal_id] = ""
            intersection_name = McityLight.signals_constants[signal_id]["intersection_name"]
            for intersection in json_obj["intersections"]:
                if intersection["name"] == intersection_name:
                    signal_info = intersection
                    for i in range(len(McityLight.signals_constants[signal_id]["phase_order"])):
                        phase_id = McityLight.signals_constants[signal_id]["phase_order"][i]
                        phase = signal_info["state"]["phases"][str(phase_id)]
                        c_index = McityLight.state2int_web[phase["color"].lower()]
                        tls_dict[signal_id] += McityLight.signals_constants[signal_id]["sumo_light"][i][c_index]
                    break
                
        return tls_dict
    
    def run(self):
        """Main function to update the signal timing plan of all the intersections with the specific frequency.
        """  
        print("Successfully start McityLight!") 
        self._update_signal_from_web()


def main(args=None):
    rclpy.init(args=args)

    mcity_light = McityLight()

    rclpy.spin(mcity_light)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    mcity_light.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

