#include "AsteroBocal.hpp"

std::string AestroBocal::getName() const { return name; }

AestroBocal::AestroBocal() : name("Bocal Steroid") {}

std::string AestroBocal::beMined(DeepCoreMiner *laser) const { return "Thorite"; }

std::string AestroBocal::beMined(StripMiner *laser) const { return "Flavium"; }
