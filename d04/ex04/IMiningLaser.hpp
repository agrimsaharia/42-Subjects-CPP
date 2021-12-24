#pragma once

#include "IAsteroid.hpp"

class IMiningLaser
{
public:
    virtual ~IMiningLaser() {}
    virtual void mine(IAsteroid *) = 0;
};