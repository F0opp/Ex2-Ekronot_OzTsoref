#pragma once
#include <string>
#include "DeviceList.h"


class User
{
public:
	//initialize user
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();

	//getters
	unsigned int getID() const;
	std::string getUserName () const;
	unsigned int getAge() const;
	const DevicesList& getDevices() const;
	
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;

private:

	//fields
	unsigned int userID;
	std::string userName;
	unsigned int userAge;
	DevicesList userDevices;
};