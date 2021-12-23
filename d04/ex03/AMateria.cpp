#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : xp_(0), type(type) {}

unsigned int AMateria::getXP() const { return xp_; }

void AMateria::setXP(unsigned int xp) { xp_ = xp; }

std::string const &AMateria::getType() const { return type; }