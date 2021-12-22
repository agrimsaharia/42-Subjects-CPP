#pragma once

#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
protected:
    unsigned int Hitpoints = 60;
    unsigned int Maxhitpoints = 60;
    unsigned int Energypoints = 120;
    unsigned int Maxenergypoints = 120;
    int Meleeattackdamage = 60;
    int Rangedattackdamage = 5;
    int Armordamagereduction = 0;
public:
    NinjaTrap(std::string name);
    ~NinjaTrap();
    void ninjaShoebox();
};