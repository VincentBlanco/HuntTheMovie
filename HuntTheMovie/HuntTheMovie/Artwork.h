#pragma once
#include <string>
#include "DistributorList.h"

class Artwork
{
public :
	Artwork();
	Artwork(std::string name);
	std::string getName();
	void setName(std::string name);
	DistributorList getDistributorList();
	void setDistributorList(DistributorList distributorList);
private :
	std::string name_;
	DistributorList distributorList_;
};

