#pragma once
#include <string>

class Utilisateur
{
public:
	Utilisateur();
	Utilisateur(std::string username, std::string password);
	std::string getUsername();
	void setUsername(std::string username);
	std::string getPassword();
	void setPassword(std::string password);
private :
	std::string username_;
	std::string password_;
};

