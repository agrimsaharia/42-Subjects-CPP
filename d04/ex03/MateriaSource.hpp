#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *memory[4];
    int idx = 0;

public:
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};