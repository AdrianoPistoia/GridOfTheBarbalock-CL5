#include "Language.h"
#include <string>
Language::Language()
{
	language = { "Common" };
}

Language::Language(std::string a)
{
	language = a;
}
