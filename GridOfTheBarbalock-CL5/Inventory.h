#pragma once
#include <string>
#include "Money.h";
#include "Armor.h";
#include "Weapon.h";
class Inventory
{
private:
	int limitWght;
	int currWght;
	bool WghtImportance;
	Money mny;
	Armor arm;
	Weapon wpn;
public:
	///SETTER
	void setLimitWeight(int n) { limitWght = n; };
	void setCurrWght(int n) { currWght = n; };
	void setWghtImportance(bool n) { WghtImportance = n; };
	///GETTER
	int getLimitWght() { return limitWght; };
	int getCurrWght() { return currWght; };
	bool getWghtImportance() { return WghtImportance; };

	///CONSTR
	Inventory();
	Inventory(int limit,int current, bool importance);
	
	


};

