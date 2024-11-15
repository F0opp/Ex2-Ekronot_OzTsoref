#include <iostream>
#include "Device.h"

bool Device::isActive() const
{
	return active;
}

void Device::activate()
{
	active = true;
}

void Device::deactivate()
{
	active = false;
}

std::string Device::getOS() const
{
	return userOS;
}

DeviceType Device::getType() const
{
	return deviceType;
}

unsigned int Device::getID() const
{
	return userId;
}

void Device::init(unsigned int id, DeviceType type, std::string os)
{
	Device newDevice;
	userId = id;
	deviceType = type;
	userOS = os;
}