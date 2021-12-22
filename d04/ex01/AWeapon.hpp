#pragma once

#include <iostream>

class AWeapon {
protected:
    std::string name;
    int damage;
    int AP_cost;
public:
    AWeapon(std::string const &, int, int);
    virtual ~AWeapon();
    std::string const &getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};