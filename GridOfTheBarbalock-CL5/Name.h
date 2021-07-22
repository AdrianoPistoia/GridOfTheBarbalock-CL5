#pragma once
#include <string>
class Name
{
private:
	std::string name;
	std::string surname;
	std::string alias;
public:
	///SETTERS
	void setName(std::string c) { name = c; };
	void setSurame(std::string c) { surname = c; };
	void setAlias(std::string c) { alias = c; };
	///GETTERS
	std::string getName() { return name; };
	std::string getSurname() { return surname; };
	std::string getAlias() { return alias; };

	///CONSTR
	Name();
	Name(std::string a, std::string b, std::string c);
	Name(std::string a);
	Name(std::string a, std::string b);

















};
