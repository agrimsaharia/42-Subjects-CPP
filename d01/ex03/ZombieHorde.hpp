#pragma once

#include "../ex02/Zombie.hpp"

class ZombieHorde
{
private:
public:
    Zombie* zombiearray;
    int n;
    ZombieHorde(int n_);
    ~ZombieHorde();
    void announce();
};

void ZombieHorde::announce()
{
    for (int i = 0; i < n; i++)
    {
        zombiearray[i].announce();
    }
}

ZombieHorde::ZombieHorde(int n_)
{
    n = n_;
    zombiearray = new Zombie[n];
    int nameint[n];
    for (int i = 0; i < n; i++)
    {
        zombiearray[i].setName(names[nameint[i]%5]);
    }
}

ZombieHorde::~ZombieHorde()
{
    // for (int i = 0; i < n; i++)
    // {
    //     delete[] zombiearray[i];
    // }
    delete[] zombiearray;
}
