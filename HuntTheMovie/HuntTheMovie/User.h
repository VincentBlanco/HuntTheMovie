#pragma once
#include <string>
#include <list>
#include <map>
#include "Notice.h"
#include "Artwork.h"

class User
{
public:
	User();
	User(std::string username, std::string password);
	std::string getUsername();
	void setUsername(std::string username);
	std::string getPassword();
	void setPassword(std::string password);
	std::map<std::string, std::list<Artwork>> getArtworkListList();
	void setArtworkListList(std::map<std::string, std::list<Artwork>> artworkListList);
	std::map<Artwork, Notice> getNoticeList();
	void setNoticeList(std::map<Artwork, Notice> noticeList);
	int addNotice(Artwork artwork, Notice avis);
private :
	std::string username_;
	std::string password_;
	std::map<std::string, std::list<Artwork>> artworkListList_;
	std::map<Artwork, Notice> noticeList_;
};

