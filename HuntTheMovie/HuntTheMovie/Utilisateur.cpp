#include "Utilisateur.h"

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

std::map<Oeuvre, Avis> Utilisateur::getListeAvis()
{
	return listeAvis_;
}

void Utilisateur::setListeAvis(std::map<Oeuvre, Avis> listeAvis)
{
	listeAvis_ = listeAvis;
}

int Utilisateur::addListeAvis(Oeuvre oeuvre, Avis avis)
{
	//à faire
	return 0;
}
