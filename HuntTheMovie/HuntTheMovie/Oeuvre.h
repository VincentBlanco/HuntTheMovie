#pragma once
#include <string>
#include "ListeDistributeurs.h"

class Oeuvre
{
public :
	Oeuvre();
	Oeuvre(std::string nom);
	std::string getNom();
	void setNom(std::string nom);
	ListeDistributeurs getListeDistributeurs();
	void setListeDistributeurs(ListeDistributeurs listDistributeurs);
private :
	std::string nom_;
	ListeDistributeurs listDistributeurs_;
};

