#include "User.h"

User::User()
{
	username_ = "";
	password_ = "";
}

User::User(std::string username, std::string password)
{
	username_ = username;
	password_ = password;
}

std::string	User::getUsername()
{
	return username_;
}

void User::setUsername(std::string username)
{
	username_ = username;
}

std::string User::getPassword()
{
	return password_;
}

void User::setPassword(std::string password)
{
	password_ = password;
}

std::map<std::string, std::list<Artwork>> User::getArtworkListList()
{
	return artworkListList_;
}

void User::setArtworkListList(std::map<std::string, std::list<Artwork>> artworkListList)
{
	artworkListList_ = artworkListList;
}

std::map<Artwork, Notice> User::getNoticeList()
{
	return noticeList_;
}

void User::setNoticeList(std::map<Artwork, Notice> noticeList)
{
	noticeList_ = noticeList;
}

int User::addNotice(Artwork artwork, Notice avis)
{
	//à faire
	return 0;
}
