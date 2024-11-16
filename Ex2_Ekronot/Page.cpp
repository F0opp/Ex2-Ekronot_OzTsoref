#include "Page.h"

void Page::init()
{
	pagePosts = "";
	pageStatus = "";
}

void Page::clearPage()
{
	pagePosts = "";
	pageStatus = "";
}

std::string Page::getPosts() const
{
	return pagePosts;
}

std::string Page::getStatus() const
{
	return pageStatus;
}

void Page::setStatus(std::string status)
{
	pageStatus = "Status: " +status + "\n*******************\n*******************\n";
}

void Page::addLineToPosts(std::string new_line)
{
	pagePosts += new_line + "\n";
}