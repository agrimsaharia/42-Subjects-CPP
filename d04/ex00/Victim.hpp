#pragma once

#include <iostream>

class Victim
{
protected:
    std::string name;

public:
    Victim(std::string name);
    std::string const &getName();
    virtual void getPolymorphed() const;
    ~Victim();
};

std::ostream &operator<<(std::ostream &os, Victim &vic);