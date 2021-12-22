#pragma once

#include<string>
#include<iostream>

class ScavTrap
{
private:
    unsigned int Hitpoints = 100;
    unsigned int Maxhitpoints = 100;
    unsigned int Energypoints = 50;
    unsigned int Maxenergypoints = 50;
    int Level = 1;
    int Meleeattackdamage = 20;
    int Rangedattackdamage = 15;
    int Armordamagereduction = 3;
    std::string Name;
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewComer(std::string &target);
};

const std::string challenges[] = {"Lick Your Elbow", "Shave Your Head", "Walk like a hooker", "Hop around like a Monkey", "Disco Dance on Titanic theme"};

