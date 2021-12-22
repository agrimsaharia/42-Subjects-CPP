#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde z(5);
    z.announce();
    Zombie *z1 = &z.zombiearray[3];
    z.~ZombieHorde();
    z1->announce();
}