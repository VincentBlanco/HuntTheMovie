#pragma once
#include <string>
#include <list>
#include <map>
#include "ListeOeuvres.h"
#include "Avis.h"
#include "Oeuvre.h"

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
	std::map<Oeuvre, Avis> getListeAvis();
	void setListeAvis(std::map<Oeuvre, Avis> listeAvis);
	int addListeAvis(Oeuvre oeuvre, Avis avis);
private :
	std::string username_;
	std::string password_;
	std::list<ListeOeuvres> listeListeOeuvres_;
	std::map<Oeuvre, Avis> listeAvis_;
};

