#pragma once
#include <string>
class Money
{
private:
	int value;
public:
    ///SETTERS
    void setValue(int n) { value = n; };

    ///GETTERS
    int getValue() { return value; };

    ///CONSTR
    Money();
    Money(int val);






};

