#pragma once
#include <string>
#include "ProfileList.h"

class SocialNetwork
{
public:

	//initialize SocialNetwork
	void init(std::string networkName, int minAge);
	void clear();

	//getters
	std::string getNetworkName();
	int getMinAge();

	bool addProfile(Profile profile_to_add);
	std::string getWindowsDevices();

private:

	//fields
	std::string netName;
	int minimumAge;
	ProfileList profiles;

};