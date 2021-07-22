#pragma once
#include <string>
class Alignment
{
private:

	std::string A;
	std::string B;
public:
	///SETTERS
	void setA(std::string c) { A = c; };
	void setB(std::string c) { B = c; };

	///GETTERS
	std::string getA() { return A; };
	std::string getB() { return B; };

	///CONSTR
	Alignment();
	Alignment(std::string a);
	Alignment(std::string a, std::string b);



















};

