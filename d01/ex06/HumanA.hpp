#pragma once

#include "Weapon.hpp"
#include<iostream>

class HumanA
{
private:
    Weapon& w;  // it is initialised at creation only
    std::string name;
public:
    HumanA(std::string name_, Weapon &w_) : name(name_), w(w_) {}
    ~HumanA();
    void attack() const;
};

// HumanA::HumanA(std::string name_, Weapon &w_)
// {
//     w = w_;
//     name = name_;
// }

void HumanA::attack() const
{
    std::cout << name << " attacks with his " << *(w.getType()) << std::endl;
}


HumanA::~HumanA()
{
}
