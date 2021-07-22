#pragma once
#include <string>
class Language
{
private:
	std::string language;
public:
	///SETTERS
	void setLanguage(std::string c) { language = c; };

	///GETTERS
	std::string getLanguage() { return language; };

	///CONSTR	
	Language();
	Language(std::string a);















};
