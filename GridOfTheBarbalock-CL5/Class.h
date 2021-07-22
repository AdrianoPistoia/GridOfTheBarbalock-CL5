#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

class Class
{
private:
	std::string name;
public:
	///SETTERS
	void setName(std::string n) { name = n; };
	
	///GETTERS
	std::string getName() { return name; };

	///CONSTR
	Class();
	Class(std::string a);

};

