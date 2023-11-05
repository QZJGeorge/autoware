#!/usr/bin/env bash

# Update firmware
ros2 run dataspeed_boot_usb bootloader -id "EPAS USB CAN (EUCAN) RevA" -app_pid 0112 -app_cmd 1 -f "`ros2 pkg prefix dataspeed_can_usb`/share/dataspeed_can_usb/firmware/UsbCan_EUCAN_v10.4.0.hex"
