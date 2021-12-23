#include "Character.hpp"

Character::Character(Character const &ch)
{
    for (int i = 0; i < 4; i++)
    {
        if (ch.inventory[i] != nullptr)
            inventory[i] = ch.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
}

Character &Character::operator=(Character const &ch)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] != nullptr)
            delete &(*inventory[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (ch.inventory[i] != nullptr)
            inventory[i] = ch.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
    return *this;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == nullptr) 
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
        inventory[idx]->use(target);
}

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
    }
}
