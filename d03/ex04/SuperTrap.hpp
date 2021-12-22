#pragma once

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
private:
    unsigned int Hitpoints = FragTrap::Hitpoints;
    unsigned int Maxhitpoints = FragTrap::Maxhitpoints;
    unsigned int Energypoints = NinjaTrap::Energypoints;
    unsigned int Maxenergypoints = NinjaTrap::Maxenergypoints;
    int Meleeattackdamage = NinjaTrap::Meleeattackdamage;
    int Rangedattackdamage = FragTrap::Rangedattackdamage;
    int Armordamagereduction = FragTrap::Armordamagereduction;
public:
    SuperTrap(std::string name);
    ~SuperTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    // void takeDamage(unsigned int amount);
    // void beRepaired(unsigned int amount);
};


