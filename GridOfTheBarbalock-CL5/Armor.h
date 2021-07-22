#pragma once
#include <string>

class Armor
{
private:
	std::string name;
	int AC;
public:
	///SETTERS
	void setName(std::string c) { name = c; };
	void setAC(int n) { AC = n; };

	///GETTERS
	std::string getName() { return name; };
	int getAC() { return AC; };

	///CONSTR
	Armor ();
	Armor(std::string nam,int n);
};


