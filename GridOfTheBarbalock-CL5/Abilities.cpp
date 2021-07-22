#include "Abilities.h"
#include <string>

Abilities::Abilities()
{
	STR = 15;
	setSTRmod();
	DEX = 15;
	setDEXmod();
	CON = 15;
	setCONmod();
	INT = 15;
	setINTmod();
	WIS = 15;
	setWISmod();
	CHA = 15;
	setCHAmod();
}

Abilities::Abilities(int s, int d, int c, int i, int w, int ch)
{
	STR = s;
	setSTRmod();
	DEX = d;
	setDEXmod();
	CON = c;
	setCONmod();
	INT = i;
	setINTmod();
	WIS = w;
	setWISmod();
	CHA = ch;
	setCHAmod();
}
