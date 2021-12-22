#pragma once

#include "Weapon.hpp"
#include<iostream>

class HumanB
{
private:
    Weapon* w;
    std::string name;
public:
    HumanB();
    HumanB(std::string name_);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon &w_);
};

void HumanB::setWeapon(Weapon &w_)
{
    w = &w_;
}

HumanB::HumanB(std::string name_)
{
    name = name_;
}

void HumanB::attack() const
{
    std::cout << name << " attacks with his " << *(w->getType()) << std::endl;
}

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}
