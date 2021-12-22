#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    void attack() const;
    ~PlasmaRifle();
};
