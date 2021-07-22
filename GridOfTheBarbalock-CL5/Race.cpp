#include "Race.h"
#include <string>
Race::Race()
{
	name = { "Human" };
	subName = { "" };
}

Race::Race(std::string a)
{
	name = a;
}

Race::Race(std::string a, std::string b)
{
	name = a;
	subName = b;
}
