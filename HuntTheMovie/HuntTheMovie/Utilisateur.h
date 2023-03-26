#pragma once
#include <string>
#include <list>
#include "ListeOeuvres.h"

class Utilisateur
{
public:
	Utilisateur();
	Utilisateur(std::string username, std::string password);
	std::string getUsername();
	void setUsername(std::string username);
	std::string getPassword();
	void setPassword(std::string password);
	std::list<ListeOeuvres> getListeListeOeuvres();
	void setListeListeOeuvres(std::list<ListeOeuvres> listeListeOeuvres);
	void addListeOeuvres(ListeOeuvres listeOeuvres);
private :
	std::string username_;
	std::string password_;
	std::list<ListeOeuvres> listeListeOeuvres_;
};

