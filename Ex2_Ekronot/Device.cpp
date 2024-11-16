#include <iostream>
#include "Device.h"

/*
Checks for if device is active or not
input: none
output: boolean value indicating if the device is active or not. 
*/
bool Device::isActive() const
{
	return active;
}

/*
Activates device
input: none
output: none
*/
void Device::activate()
{
	active = true;
}

/*
Deactivates device
input:
output:
*/
void Device::deactivate()
{
	active = false;
}

/*
Gets device OS
input: none
output: string varible containing device OS
*/
std::string Device::getOS() const
{
	return deviceOS;
}

/*
Gets device type
input: none
output: DeviceType value of the device type
*/
DeviceType Device::getType() const
{
	return deviceType;
}

/*
gets device id
input: none
output: int value of the device id
*/
unsigned int Device::getID() const
{
	return deviceId;
}

/*
initializeses a device
input:	unsigned int id - device id
		DeviceType type - device type
		std::string os - device os
output: none
*/
void Device::init(unsigned int id, DeviceType type, std::string os)
{
	deviceId = id;
	deviceType = type;
	deviceOS = os;
}