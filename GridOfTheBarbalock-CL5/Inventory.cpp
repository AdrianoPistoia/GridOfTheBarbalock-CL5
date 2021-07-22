#include "Inventory.h"
#include <string>
Inventory::Inventory()
{
	limitWght = 200;
	currWght = 0;
	WghtImportance= true;
	Money mny;
	Armor arm;
	Weapon wpn;


}

Inventory::Inventory(int limit, int current, bool importance)
{
	limitWght = limit;
	currWght = current;
	WghtImportance = importance;
	Money mny;
	Armor arm;
	Weapon wpn;
}
