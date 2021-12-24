#pragma once

#include "IAsteroid.hpp"

class BocalSteroid : public IAsteroid
{
private:
    std::string name;

public:
    BocalSteroid();
    std::string beMined(DeepCoreMiner *) const;
    std::string beMined(StripMiner *) const;
    std::string getName() const;
};