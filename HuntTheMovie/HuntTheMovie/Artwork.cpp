#include "Artwork.h"

Artwork::Artwork()
{
	name_ = "";
}

Artwork::Artwork(std::string name)
{
	name_ = name;
}

std::string Artwork::getName()
{
	return name_;
}

void Artwork::setName(std::string name)
{
	name_ = name;
}

DistributorList Artwork::getDistributorList()
{
	return distributorList_;
}

void Artwork::setDistributorList(DistributorList distributorList)
{
	distributorList_ = distributorList;
}
