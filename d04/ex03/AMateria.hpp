#pragma once

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
private:
    unsigned int xp_;
    std::string type;

public:
    AMateria(std::string const &type);
    void setXP(unsigned int xp);
    virtual ~AMateria() {}
    std::string const &getType() const; //Returns the materia type
    unsigned int getXP() const;         //Returns the Materia's XP
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;
};