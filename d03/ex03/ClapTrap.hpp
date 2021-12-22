#pragma once

#include<string>
#include<iostream>

class ClapTrap
{
protected:
    unsigned int Hitpoints = 100;
    unsigned int Maxhitpoints = 100;
    unsigned int Energypoints = 100;
    unsigned int Maxenergypoints = 100;
    int Level = 1;
    int Meleeattackdamage = 30;
    int Rangedattackdamage = 20;
    int Armordamagereduction = 5;
    std::string Name;
public:
    ClapTrap(std::string name);
    ~ClapTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};