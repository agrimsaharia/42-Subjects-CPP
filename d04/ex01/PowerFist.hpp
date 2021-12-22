#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    void attack() const;
    ~PowerFist();
};
