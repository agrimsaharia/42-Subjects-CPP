#include "AsteroBocal.hpp"
#include "BocalSteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"
#include "StripMiner.hpp"

int main()
{
    MiningBarge barge;
    BocalSteroid bs;
    AestroBocal ab;
    StripMiner sm1, sm2;
    DeepCoreMiner dcm1, dcm2;
    barge.equip(&sm1);
    barge.equip(&sm2);
    barge.mine(&bs);
    barge.equip(&dcm2);
    barge.mine(&ab);
    barge.equip(&dcm1);
    barge.mine(&bs);
}