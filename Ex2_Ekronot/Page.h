#pragma once

#include<string>

class Page
{
public:

	// initializes page
	void init();
	void clearPage();

	//getters
	std::string getPosts() const;
	std::string getStatus() const;

	//setter
	void setStatus(std::string status);

	void addLineToPosts(std::string new_line);

private:

	//fields
	std::string pagePosts;
	std::string pageStatus;
};