#include "State.h"
#include <string>
State::State()
{
	status = { "Healthy" };
}

State::State(std::string a)
{
	status = a;
}
