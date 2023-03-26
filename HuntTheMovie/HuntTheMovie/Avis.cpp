#include "Avis.h"

Avis::Avis()
{
	notation_ = 0;
	commentaire_ = "";
}

Avis::Avis(int notation, std::string commentaire)
{
	notation_ = notation;
	commentaire_ = commentaire;
}

int Avis::getNotation()
{
	return notation_;
}

void Avis::setNotation(int notation)
{
	notation_ = notation;
}

std::string Avis::getCommentaire()
{
	return commentaire_;
}

void Avis::setCommentaire(std::string commentaire)
{
	commentaire_ = commentaire;
}
