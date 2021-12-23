#include "Ice.hpp"

AMateria *Ice::clone() const
{
    AMateria* cloned = new Ice();
    cloned->setXP(this->getXP());
    return cloned;
}

Ice::Ice() : AMateria("ice") {}

void Ice::use(ICharacter &target)
{
    this->setXP(this->getXP()+10);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}