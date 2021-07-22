#include "Armor.h"
#include <string>
Armor::Armor()
{
	name = { "None" };
	AC = 0;
}
Armor::Armor(std::string nam, int n)
{
	name = nam;
	AC = n;
}
;
