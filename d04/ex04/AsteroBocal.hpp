#pragma once

#include "IAsteroid.hpp"

class AestroBocal : public IAsteroid
{
private:
    std::string name;

public:
    AestroBocal();
    std::string beMined(DeepCoreMiner *) const;
    std::string beMined(StripMiner *) const;
    std::string getName() const;
};
