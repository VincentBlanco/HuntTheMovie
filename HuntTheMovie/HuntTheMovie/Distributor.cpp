#include "Distributor.h"

Distributor::Distributor()
{
	name_ = "";
	link_ = "",
}

Distributor::Distributor(std::string name, std::string link)
{
	name_ = name;
	link_ = link;
}


std::string Distributor::getName()
{
	return name_;
}

void Distributor::setName(std::string name)
{
	name_ = name;
}

std::string Distributor::getLink()
{
	return name_;
}

void Distributor::setLink(std::string link)
{
	link_ = link;
}