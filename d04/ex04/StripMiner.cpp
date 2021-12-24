#include "StripMiner.hpp"

void StripMiner::mine(IAsteroid *target)
{
    std::cout << "* strip mining ... got " << target->beMined(this) << " ! *" << std::endl;
}