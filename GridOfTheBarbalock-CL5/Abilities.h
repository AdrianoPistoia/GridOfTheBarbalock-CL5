#pragma once
#include <string>
class Abilities
{
private:
	int STR;
	int STRmod;
	int DEX;
	int DEXmod;
	int CON;
	int CONmod;
	int INT;
	int INTmod;
	int WIS;
	int WISmod;
	int CHA;
	int CHAmod;
public:
	///SETTERS
	void setSTR(int n){STR=n;};
	void setSTRmod(){STRmod = STR / 2 - 5;};
	void setDEX(int n){DEX=n;};
	void setDEXmod(){DEXmod = DEX / 2 - 5;};
	void setCON(int n){CON=n;};
	void setCONmod(){CONmod = CON / 2 - 5;};
	void setINT(int n){INT=n;};
	void setINTmod(){INTmod = INT / 2 - 5;};
	void setWIS(int n){WIS=n;};
	void setWISmod(){WISmod = WIS / 2 - 5;};
	void setCHA(int n){CHA=n;};
	void setCHAmod(){CHAmod = CHA / 2 - 5;};

	///GETTERS
	int getSTR(){return STR;};
	int getSTRmod(){return STRmod;};
	int getDEX(){return DEX;};
	int getDEXmod(){return DEXmod;};
	int getCON(){return CON;};
	int getCONmod(){return DEXmod;};
	int getINT(){return INT;};
	int getINTmod(){return INTmod;};
	int getWIS(){return WIS;};
	int getWISmod(){return WISmod;};
	int getCHA(){return CHA;};
	int getCHAmod(){return CHAmod;};



	///CONSTRUCTORS
	Abilities();
	Abilities(int s, int d, int c, int i, int w, int ch);

};

