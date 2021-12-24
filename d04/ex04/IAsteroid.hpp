#pragma once

#include <iostream>
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
    virtual ~IAsteroid() {}
    virtual std::string beMined(DeepCoreMiner *) const = 0;
    virtual std::string beMined(StripMiner *) const = 0;
    virtual std::string getName() const = 0;
};