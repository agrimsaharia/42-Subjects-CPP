#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // FragTrap ft("Agrim");
    // std::string target = "Saksham";
    // unsigned int amount = 3;
    // ft.rangedAttack(target);
    // ft.meleeAttack(target);
    // ft.takeDamage(12424);
    // ft.beRepaired(amount);
    // ft.vaulthunter_dot_exe(target);

    ScavTrap st("Ra's Al Ghul");
    std::string target = "Bane";
    unsigned int amount = 3;
    st.rangedAttack(target);
    st.meleeAttack(target);
    st.takeDamage(12424);
    st.beRepaired(amount);
    st.challengeNewComer(target);
}