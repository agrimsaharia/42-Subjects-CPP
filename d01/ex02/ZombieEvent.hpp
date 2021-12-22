#pragma once

#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombietype(std::string type_);
    Zombie* newZombie(std::string name_);
    void randomChump();
};

void ZombieEvent::randomChump()
{
    int n;
    std::string name = names[n%5];
    Zombie z(name);
    z.announce();
}

Zombie* ZombieEvent::newZombie(std::string name_)
{
    Zombie *z = new Zombie(name_, type);
    return z;
}

void ZombieEvent::setZombietype(std::string type_)
{
    type = type_;
}

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}
