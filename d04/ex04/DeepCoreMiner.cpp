#include "DeepCoreMiner.hpp"

void DeepCoreMiner::mine(IAsteroid* target)
{
    std::cout << "* mining deep ... got " << target->beMined(this) << " ! *" << std::endl;
}
