#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    Name = name;
    std::cout << "Claptrap -- start bootup sequence" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << Name << "> attacks <" << target << "> at range, causing <" << Rangedattackdamage << "> points of damage" << std::endl;
    Hitpoints = std::min(Hitpoints+Rangedattackdamage, Maxhitpoints);
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP <" << Name << "> stabs <" << target << "> with a melee, causing <" << Meleeattackdamage << "> points of damage" << std::endl;
    Hitpoints = std::min(Hitpoints+Meleeattackdamage, Maxhitpoints);
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (amount > Armordamagereduction) 
    {
        if (amount > Armordamagereduction+Energypoints) Energypoints = 0;
        else Energypoints -= (amount - Armordamagereduction);
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    Energypoints = std::min(Energypoints+amount, Maxenergypoints);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (Energypoints >= 25)
    {
        unsigned int damage = std::rand()%(Maxhitpoints) + 1;
        Hitpoints = std::min(Hitpoints+damage, Maxhitpoints);
        std::cout << "FR4G-TP <" << Name << "> attacks <" << target << "> with a <" << attacks[std::rand()%5] << "> causing <" << damage << "> points of damage" << std::endl;
    }
    else 
    {
        std::cout << "Well! You need enough energy. Dont you?" << std::endl;
    }
}