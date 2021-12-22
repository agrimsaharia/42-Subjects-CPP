#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    std::cout << "CL4P-TP <" << Name << "> Claptrap -- start bootup sequence" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP <" << Name << "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << '<' << Name << "> attacks <" << target << "> at range, causing <" << Rangedattackdamage << "> points of damage" << std::endl;
    Hitpoints = std::min(Hitpoints+Rangedattackdamage, Maxhitpoints);
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << '<' << Name << "> stabs <" << target << "> with a melee, causing <" << Meleeattackdamage << "> points of damage" << std::endl;
    Hitpoints = std::min(Hitpoints+Meleeattackdamage, Maxhitpoints);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > Armordamagereduction) 
    {
        if (amount > Armordamagereduction+Energypoints) Energypoints = 0;
        else Energypoints -= (amount - Armordamagereduction);
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    Energypoints = std::min(Energypoints+amount, Maxenergypoints);
}
