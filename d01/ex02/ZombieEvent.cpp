#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent z;
    z.setZombietype("World War Z");
    Zombie* z2 = z.newZombie("Gutter Mastaram");
    z2->announce();
    z.randomChump();
}