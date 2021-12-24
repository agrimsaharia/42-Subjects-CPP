#pragma once

#include "IMiningLaser.hpp"
#include <iostream>


class DeepCoreMiner : public IMiningLaser
{
public:
    void mine(IAsteroid* );
};
