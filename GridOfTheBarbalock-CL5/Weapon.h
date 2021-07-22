#pragma once
#include <string>
class Weapon
{
private:
	std::string name;
public:
	///SETTERS
	void setName(std::string c) { name = c; };
	
	///GETTERS
	std::string getName() { return name; };

	///CONSTR
	Weapon();
	Weapon(std::string nam);







};

