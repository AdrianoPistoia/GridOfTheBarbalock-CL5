#pragma once
#include <string>
class Feats
{
private:
	std::string name;
public:
	///SETTERS
	void setName(std::string c) { name = c; };
	///GETTERS
	std::string getName() { return name; };

	///CONSTR
	Feats();
	Feats(std::string a);
}; 

