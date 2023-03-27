#pragma once
#include <string>
#include <list>
#include <map>
#include "Notice.h"
#include "Artwork.h"

class User
{
public:
	//constructors
	User();
	User(std::string username, std::string password);

	//getter and setter
	std::string getUsername();
	void setUsername(std::string username);
	std::string getPassword();
	void setPassword(std::string password);
	std::map<std::string, std::list<Artwork>> getArtworkListList();
	void setArtworkListList(std::map<std::string, std::list<Artwork>> artworkListList);
	std::list<Notice> getNoticeList();
	void setNoticeList(std::list<Notice> noticeList);

	//NoticeList methodes
	int addNotice(Notice notice);
	int deleteNotice(Notice notice);
	void setNoticeComment(Notice notice, std::string comment);
	void setNoticeNote(Notice notice, int note);

	//ArtworkListList methodes
	int addArtworkList(std::string name);
	int deleteArtworkList(std::string name);
	int addArtworkToArtworkList(std::string name, Artwork artwork);
	int deleteArtworkFromArtworkList(std::string name, Artwork artwork);
private :
	std::string username_;
	std::string password_;
	std::map<std::string, std::list<Artwork>> artworkListList_;
	std::list<Notice> noticeList_;
};

