#pragma once
#include <string>
class Race
{
private:
	std::string name;
	std::string subName;
public:
	///SETTER
	void setName(std::string c) { name = c; };
	void setSubName(std::string c) { subName = c; };
	///GETTER
	std::string getName() { return name; };
	std::string getSubName() { return subName; };
	///CONST
	Race();
	Race(std::string a);
	Race(std::string a, std::string b);
};

