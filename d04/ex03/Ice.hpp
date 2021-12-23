#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    AMateria *clone() const;
    void use(ICharacter &target);
};
