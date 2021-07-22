#include "Name.h"
#include <string>
Name::Name()
{
	 name = { "Matias" };
	 surname = { "El Furro" };
	 alias = { "Falher" };
}

Name::Name(std::string a, std::string b, std::string c)
{
	name = a;
	surname = b;
	alias = c;
}

Name::Name(std::string a)
{
	name = a;
}

Name::Name(std::string a, std::string b)
{
	name = a;
	surname = b;
}
