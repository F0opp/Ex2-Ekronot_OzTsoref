#include "SocialNetwork.h"
#include "ProfileList.h"
#include <iostream>

void SocialNetwork::init(std::string networkName, int minAge)
{
	netName = networkName;
	minimumAge = minAge;
	profiles.init();
}

void SocialNetwork::clear()
{
	netName = "";
	minimumAge = 0;
	profiles.clear();
}

std::string SocialNetwork::getNetworkName()
{
	return netName;
}

int SocialNetwork::getMinAge()
{
	return minimumAge;
}

bool SocialNetwork::addProfile(Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() >= minimumAge)
	{
		profiles.add(profile_to_add);
		return true;
	}
	return false;
}

std::string SocialNetwork::getWindowsDevices()
{
    ProfileNode* curr;
    std::string windowsDevices = "";
    ProfileList test = profiles;

    if (profiles.get_first() == nullptr)
    {
        return "No profiles";
    }

    for (curr = profiles.get_first(); curr != nullptr; curr = curr->get_next())
    {
        DevicesList devices = curr->get_data().getOwner().getDevices();
        DeviceNode* deviceNode = devices.get_first();

        while (deviceNode != nullptr)
        {
            std::string os = deviceNode->get_data().getOS();
            int i = os.find("Windows");
            if (os.find("Windows") >= 0 && os.find("Windows") < os.length())
            {
                windowsDevices += "[" + std::to_string(deviceNode->get_data().getID()) + ", " + os + "], ";
            }
            deviceNode = deviceNode->get_next();
        }
    }

    if (windowsDevices.empty())
    {
        return "no Windows devices";
    }

    windowsDevices.resize(windowsDevices.size() - 2);

    return windowsDevices;
}