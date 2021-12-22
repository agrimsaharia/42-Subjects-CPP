#include "SuperTrap.hpp"

int main()
{
    SuperTrap nt("Joker");
    std::string target = "Gordon";
    unsigned int amount = 3;
    nt.rangedAttack(target);
    nt.meleeAttack(target);
    nt.takeDamage(12424);
    nt.beRepaired(amount);
    nt.ninjaShoebox();
    nt.vaulthunter_dot_exe(target);
}