# Extension of can_msgs/Frame to support CAN-FD flags and larger data sizes

std_msgs/Header header

uint32 id
bool extended
bool fdf
bool brs
bool esi
bool rtr
uint8[<=64] data