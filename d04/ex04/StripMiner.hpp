#pragma once

#include "IMiningLaser.hpp"
#include <iostream>

class StripMiner : public IMiningLaser
{
public:
    void mine(IAsteroid *);
};

