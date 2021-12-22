#pragma once

#include<string>
#include<iostream>

class FragTrap
{
private:
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
    FragTrap(std::string name);
    ~FragTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
};

const std::string attacks[] = {"FartAttack", "RickRollAttack", "KickToGroinAttack", "BellyButtonAttack", "BananaAttack"};

