#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "N1NJ4-TP <" << Name << "> TIME TO BLEED!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "N1NJ4-TP <" << Name << "> GO GOA GONE!" << std::endl;
}

void NinjaTrap::ninjaShoebox()
{
    std::cout << '<' << Name << "> got hit by his own shuriken and took <" << Rangedattackdamage << "> damage" << std::endl;
    this->takeDamage(50);
}