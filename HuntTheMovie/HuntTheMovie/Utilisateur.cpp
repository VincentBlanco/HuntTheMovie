#include "Utilisateur.h"
#include <string>

Utilisateur::Utilisateur()
{
	username_ = "";
	password_ = "";
}

Utilisateur::Utilisateur(std::string username, std::string password)
{
	username_ = username;
	password_ = password;
}

std::string	Utilisateur::getUsername()
{
	return username_;
}

void Utilisateur::setUsername(std::string username)
{
	username_ = username;
}

std::string Utilisateur::getPassword()
{
	return password_;
}

void Utilisateur::setPassword(std::string password)
{
	password_ = password;
}

std::list<ListeOeuvres> Utilisateur::getListeListeOeuvres()
{
	return listeListeOeuvres_;
}

void Utilisateur::setListeListeOeuvres(std::list<ListeOeuvres> listeListeOeuvres)
{
	listeListeOeuvres_ = listeListeOeuvres;
}

void Utilisateur::addListeOeuvres(ListeOeuvres listeOeuvres)
{
	listeListeOeuvres_.push_back(listeOeuvres);
}
