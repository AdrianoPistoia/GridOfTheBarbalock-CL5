#pragma once
#include <string>
#include "Name.h"
#include "Class.h"
#include "Race.h"
#include "Abilities.h"
#include "Skills.h"
#include "Language.h"
#include "Alignment.h"
#include "State.h"
#include "Feats.h"
#include "Inventory.h"
class PC
{
private:
	int HP;
	int AC;
	int SP;
	int age;
	int LVL;
	int tam;
	int heigth;
	int weigth;
	std::string desc;
	Name name;
	Class clas;
	Race race;
	Abilities abilit;
	Skills	skill;
	Language lang;
	Alignment algin;
	State estate;
	Feats feats;
	Inventory inv;
public:
	///SETTERS
	void setDesc(std::string c) { desc = c; };
	void setHP(int n) { HP = n; };
	void setAC(int n) { AC = n; };
	void setSP(int n) { SP = n; };
	void setAge(int n) { age = n; };
	void seLVL(int n) { LVL = n; };
	void setTam(int n) { tam = n; };
	void setHeigth(int n) { heigth = n; };
	void setWeigth(int n) { weigth = n; };

	///GETTERS
	std::string getDesc() { return desc; };
	int getHP() { return HP; };
	int getAC() { return AC; };
	int getSP() { return SP; };
	int getAge() { return age; };
	int getLVL() { return LVL; };
	int getTam() { return tam; };
	int getHeigth() { return heigth; };
	int getWeigth() { return weigth; };

	///CONSTR
	PC();
};

