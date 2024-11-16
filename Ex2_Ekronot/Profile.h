#pragma once
#include "UserList.h"
#include "Page.h"
#include <string>

class Profile
{
public:
	
	//initialize Profile
	void init(User owner);
	void clear();

	//setter
	void setStatus(std::string new_status);
	
	void addPostToProfilePage(const std::string post);
	void addFriend(const User friend_to_add);
	
	//getters
	User getOwner() const;
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;

	void changeAllWordsInStatus(std::string word);
	void changeWordInStatus(std::string word_to_replace, std::string new_word);

private:
	//fields
	User userOwner;
	Page userPage;
	UserList friendList;

};