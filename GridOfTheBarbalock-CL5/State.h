#pragma once
#include <string>
class State
{
private:
    std::string status;
public:
    ///SETTERS
    void setStatus(std::string c) { status = c; };
    ///GETTERS
    std::string getStatus() { return status; };
    
    ///CONSTR
    State();
    State(std::string a);

};
