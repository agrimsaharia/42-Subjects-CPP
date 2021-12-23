#include "Cure.hpp"

AMateria *Cure::clone() const
{
    AMateria* cloned = new Cure();
    cloned->setXP(this->getXP());
    return cloned;
}

Cure::Cure() : AMateria("cure") {}

void Cure::use(ICharacter &target)
{
    this->setXP(this->getXP()+10);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}