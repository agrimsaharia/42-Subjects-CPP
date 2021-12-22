#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    std::cout << "SUP3R-TP <" << Name << "> I'm awake, stop calling me now!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUP3R-TP <" << Name << "> Aight! Imma die now" << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target) 
{ 
    this->FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) 
{ 
    this->NinjaTrap::meleeAttack(target);
}