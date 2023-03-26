#include "Notice.h"

Notice::Notice()
{
	note_ = 0;
	comment_ = "";
}

Notice::Notice(int note, std::string comment)
{
	note_ = note;
	comment_ = comment;
}

int Notice::getNote()
{
	return note_;
}

void Notice::setNote(int note)
{
	note_ = note;
}

std::string Notice::getComment()
{
	return comment_;
}

void Notice::setComment(std::string comment)
{
	comment_ = comment;
}
