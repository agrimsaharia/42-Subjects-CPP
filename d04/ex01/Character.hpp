#pragma once

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string name;
    int ap;
    AWeapon *currWeapon;

public:
    Character(std::string const &);
    virtual ~Character();
    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
    std::string const &getName() const;
    AWeapon const *getWeapon() const;
    int getAP();
};

std::ostream &operator<<(std::ostream &os, Character &ch);
