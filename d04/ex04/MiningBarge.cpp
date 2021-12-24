#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
{
    for (int i = 0; i < 4; i++)
    {
        lasers[i] = nullptr;
    }
}

void MiningBarge::equip(IMiningLaser *laser)
{
    if (eq != 4) lasers[eq++] = laser;
}

void MiningBarge::mine(IAsteroid *target) const
{
    for (int i = 0; i < eq; i++)
    {
        lasers[i]->mine(target);
    }   
}
