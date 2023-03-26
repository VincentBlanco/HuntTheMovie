#pragma once
#include <string>

class Avis
{
public :
	Avis();
	Avis(int notation, std::string commentaire);
	int getNotation();
	void setNotation(int notation);
	std::string getCommentaire();
	void setCommentaire(std::string commentaire);
private :
	int notation_;
	std::string commentaire_;
};

