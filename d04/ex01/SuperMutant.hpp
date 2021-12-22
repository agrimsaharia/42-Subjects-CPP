#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
    
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int);
};
