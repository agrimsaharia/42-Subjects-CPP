#pragma once

#include "ISpaceMarine.hpp"
#include<iostream>

class AssaultTerminator : public ISpaceMarine
{
private:
    
public:
    AssaultTerminator();
    ~AssaultTerminator();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
