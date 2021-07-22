#include "Alignment.h"
#include <string>
Alignment::Alignment()
{
	A = { "Chaotic" };
	B = { "Neutral" };
}

Alignment::Alignment(std::string a)
{
	A = a;
	B = { "Neutral" };
}

Alignment::Alignment(std::string a, std::string b)
{
	A = a;
	B = b;
}
