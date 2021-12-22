#include "FragTrap.hpp"

int main()
{
    FragTrap ft("Agrim");
    std::string target = "Saksham";
    unsigned int amount = 3;
    ft.rangedAttack(target);
    ft.meleeAttack(target);
    ft.takeDamage(12424);
    ft.beRepaired(amount);
    ft.vaulthunter_dot_exe(target);
}