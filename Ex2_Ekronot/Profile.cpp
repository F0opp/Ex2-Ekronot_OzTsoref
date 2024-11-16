#include "Profile.h"

void Profile::init(User owner)
{
	userOwner = owner;
	userPage.init();
	userPage.setStatus("");
	friendList.init();
}

void Profile::clear()
{
	userOwner.clear();
	userPage.clearPage();
	friendList.clear();
}

void Profile::setStatus(std::string new_status)
{
	userPage.setStatus(new_status);
}

void Profile::addPostToProfilePage(const std::string post)
{
	userPage.addLineToPosts(post);
}

void Profile::addFriend(const User friend_to_add)
{
	friendList.add(friend_to_add);
}

User Profile::getOwner() const
{
	return userOwner;
}

std::string Profile::getPage() const
{
	return userPage.getStatus() + userPage.getPosts();
}

std::string Profile::getFriends() const
{
	std::string friendsString = "";
	UserNode* curr;

	for (curr = friendList.get_first(); curr != nullptr; curr = curr->get_next()) 
	{
		friendsString += curr->get_data().getUserName();

		if (curr->get_next() != nullptr)
		{
			friendsString += ",";
		}
	}

	return friendsString;
}

std::string Profile::getFriendsWithSameNameLength() const
{
	std::string friendsWithSameLen = "";
	UserNode* curr; 
	int ownerLen = 0;
	int friendLen = 0;

	ownerLen = userOwner.getUserName().length();

	for (curr = friendList.get_first(); curr != nullptr; curr = curr->get_next())
	{
		friendLen = curr->get_data().getUserName().length();

		if (friendLen == ownerLen)
		{
			friendsWithSameLen += curr->get_data().getUserName() + ",";
		}
	}

	if (friendsWithSameLen.size() > 0)
	{
		friendsWithSameLen.resize(friendsWithSameLen.size() - 1);
	}

	return friendsWithSameLen;
}

void Profile::changeAllWordsInStatus(std::string word)
{
	std::string current_status = userPage.getStatus();
	std::string new_status = "";
	int start = 0;
	int end = current_status.find(' ');

	while (end != -1)
	{
		new_status += word + " ";
		start = end + 1;  
		end = current_status.find(' ', start);  
	}

	new_status += word;

	userPage.setStatus(new_status);
}

void Profile::changeWordInStatus(std::string word_to_replace, std::string new_word)
{
	std::string current_status = userPage.getStatus();
	int pos = 0;

	while ((pos = current_status.find(word_to_replace, pos)) != -1)
	{
		current_status.replace(pos, word_to_replace.length(), new_word);
		pos += new_word.length();
	}

	userPage.setStatus(current_status);
}