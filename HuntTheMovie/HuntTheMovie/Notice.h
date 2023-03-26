#pragma once
#include <string>

class Notice
{
public :
	Notice();
	Notice(int note, std::string comment);
	int getNote();
	void setNote(int note);
	std::string getComment();
	void setComment(std::string comment);
private :
	int note_;
	std::string comment_;
};

