#pragma once

#include "Victim.hpp"

class Peon : public Victim
{
private:
public:
    Peon(std::string name);
    void getPolymorphed() const;
    ~Peon();
};
