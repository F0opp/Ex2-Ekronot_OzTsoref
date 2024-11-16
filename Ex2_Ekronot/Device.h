#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		     //
													     //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
													     //
/// ///////////////////////////////////////////////////////


class Device
{
public:

	bool isActive() const;
	void activate();
	void deactivate();

	//getters
	std::string getOS() const;
	DeviceType getType() const;
	unsigned int getID() const;

	//initialize device
	void init(unsigned int id, DeviceType type, std::string os);

private:

	//fields
	unsigned int deviceId;
	DeviceType deviceType;
	std::string deviceOS;
	bool active;
};

