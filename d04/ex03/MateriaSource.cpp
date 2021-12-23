#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *materia)
{
    if (idx != 4)
        memory[idx++] = materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < idx; i++)
    {
        if (memory[i]->getType() == type)
            return memory[i]->clone();
    }
    return 0;
}