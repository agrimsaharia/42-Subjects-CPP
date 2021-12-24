#include "BocalSteroid.hpp"

std::string BocalSteroid::getName() const { return name; }

BocalSteroid::BocalSteroid() : name("Bocal Steroid") {}

std::string BocalSteroid::beMined(DeepCoreMiner *laser) const { return "Zazium"; }

std::string BocalSteroid::beMined(StripMiner *laser) const { return "Krpite"; }