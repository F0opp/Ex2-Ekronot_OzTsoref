#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
	userID = id;
	userAge = age;
	userName = username;
	userDevices.init();
}

void User::clear()
{
	userID = 0;
	userAge = 0;
    userName = "";
	userDevices.clear();
}

unsigned int User::getID() const
{
	return userID;
}

std::string User::getUserName() const
{
	return userName;
}

unsigned int User::getAge() const
{
	return userAge;
}

const DevicesList& User::getDevices() const
{
	return userDevices;
}

void User::addDevice(Device newDevice)
{
	userDevices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const
{
    DeviceNode* curr = userDevices.get_first();

    if (curr == nullptr)
    {
        return true;
    }

    while (curr != nullptr)
    {
        if (!curr->get_data().isActive()) 
        {
            return false;
        }
        curr = curr->get_next(); 
    }

    return true; 
}