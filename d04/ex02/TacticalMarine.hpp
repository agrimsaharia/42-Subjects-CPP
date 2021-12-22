#pragma once

#include "ISpaceMarine.hpp"
#include<iostream>

class TacticalMarine : public ISpaceMarine
{
private:
    
public:
    TacticalMarine();
    ~TacticalMarine();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};
