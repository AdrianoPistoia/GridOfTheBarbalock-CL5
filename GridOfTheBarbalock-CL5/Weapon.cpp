#include "Weapon.h"
#include <string>
Weapon::Weapon()
{
	name = { "Unarmed" };

}

Weapon::Weapon(std::string nam)
{
	name = nam;
}
