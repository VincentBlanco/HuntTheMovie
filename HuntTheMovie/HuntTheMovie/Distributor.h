#pragma once
#include <string>
#include <iostream>

class Distributor
{
public:
	Distributor();
	Distributor(std::string name, std::string link);
	std::string getName();
	void setName(std::string name);
	std::string getLink();
	void setLink(std::string link);
private:
	std::string name_;
	std::string link_;
};

