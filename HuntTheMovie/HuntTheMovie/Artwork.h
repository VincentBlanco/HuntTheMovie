#pragma once
#include <string>
#include <iostream>
#include "DistributorList.h"

class Artwork
{
public :
	Artwork();
	Artwork(std::string name);
	Artwork(std::string id, std::string name);
	std::string getId();
	void setId(std::string id);
	std::string getName();
	void setName(std::string name);
	DistributorList getDistributorList();
	void setDistributorList(DistributorList distributorList);
	std::string generateId();
	bool operator == (const Artwork &artwork);
	bool operator != (const Artwork &artwork);
private :
	std::string id_;
	std::string name_;
	DistributorList distributorList_;
};

