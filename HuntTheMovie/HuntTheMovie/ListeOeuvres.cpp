#include "ListeOeuvres.h"


ListeOeuvres::ListeOeuvres()
{
	nom_ = "";
	listeOeuvres_ = {};
}

ListeOeuvres::ListeOeuvres(std::string nom, std::list<Oeuvre*> listeOeuvres)
{
	nom_ = nom;
	listeOeuvres_ = listeOeuvres;
}

std::string ListeOeuvres::getNom()
{
	return nom_;
}

void ListeOeuvres::setNom(std::string nom)
{
	nom_ = nom;
}

std::list<Oeuvre*> ListeOeuvres::getListeOeuvres()
{
	return listeOeuvres_;
}

void ListeOeuvres::setListeOeuvres(std::list<Oeuvre*> listeOeuvres)
{
	listeOeuvres_ = listeOeuvres;
}

