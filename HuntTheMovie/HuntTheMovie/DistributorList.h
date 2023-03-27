#pragma once
#include <string>
#include <iostream>
#include "Distributor.h"
#include "Country.h"
#include "User.h"
#include <list>

class DistributorList
{
public:
	Country getCountry();
	std::list<Distributor> getDistributorList();
	bool isDistributorUnique(const std::list<Distributor>& distributorList, const Distributor& distributor);
	void addDistributor(const Distributor& distributor);
	void deleteDistributor(const Distributor& distributor);
private:
	std::list<Distributor> distributorList_;
};


