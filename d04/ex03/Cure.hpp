#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    
public:
    Cure();
    AMateria *clone() const;
    void use(ICharacter &target);
};
