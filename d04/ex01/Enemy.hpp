#pragma once

#include <iostream>

class Enemy
{
protected:
    int hp;
    std::string type;

public:
    Enemy(int hp, std::string const &type);
    virtual ~Enemy();
    std::string const &getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};
