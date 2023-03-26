#pragma once
#include <string>
#include <list>
#include "Oeuvre.h"

class ListeOeuvres
{
public :
	ListeOeuvres();
	ListeOeuvres(std::string nom, std::list<Oeuvre*> listeOeuvres);
	std::string getNom();
	void setNom(std::string nom);
	std::list<Oeuvre*> getListeOeuvres();
	void setListeOeuvres(std::list<Oeuvre*> listeOeuvres);
	int addOeuvre(Oeuvre oeuvre);
	int deleteOeuvre(Oeuvre oeuvre);
private :
	std::string nom_;
	std::list<Oeuvre*> listeOeuvres_;
};

