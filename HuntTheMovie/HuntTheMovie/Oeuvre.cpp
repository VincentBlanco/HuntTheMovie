#include "Oeuvre.h"

Oeuvre::Oeuvre()
{
	nom_ = "";
}

Oeuvre::Oeuvre(std::string nom)
{
	nom_ = nom;
}

std::string Oeuvre::getNom()
{
	return nom_;
}

void Oeuvre::setNom(std::string nom)
{
	nom_ = nom;
}

ListeDistributeurs Oeuvre::getListeDistributeurs()
{
	return listDistributeurs_;
}

void Oeuvre::setListeDistributeurs(ListeDistributeurs listDistributeurs)
{
	listDistributeurs_ = listDistributeurs;
}
