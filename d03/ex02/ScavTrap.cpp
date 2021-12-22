#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "SC4V-TP <" << Name << "> -- Let's get this party started!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP <" << Name << "> -- Jokes over! I'm dead!" << std::endl;
}

// void ScavTrap::rangedAttack(std::string const & target)
// {
//     std::cout << '<' << Name << "> attacks <" << target << "> at range, causing <" << Rangedattackdamage << "> points of damage" << std::endl;
//     Hitpoints = std::min(Hitpoints+Rangedattackdamage, Maxhitpoints);
// }

// void ScavTrap::meleeAttack(std::string const & target)
// {
//     std::cout << '<' << Name << "> stabs <" << target << "> with a melee, causing <" << Meleeattackdamage << "> points of damage" << std::endl;
//     Hitpoints = std::min(Hitpoints+Meleeattackdamage, Maxhitpoints);
// }

// void ScavTrap::takeDamage(unsigned int amount)
// {
//     if (amount > Armordamagereduction) 
//     {
//         if (amount > Armordamagereduction+Energypoints) Energypoints = 0;
//         else Energypoints -= (amount - Armordamagereduction);
//     }
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
//     Energypoints = std::min(Energypoints+amount, Maxenergypoints);
// }

void ScavTrap::challengeNewComer(std::string &target)
{
    std::cout << '<' << Name << "> challenges <" << target << "> to <" << challenges[std::rand()%5] << '>' << std::endl; 
}