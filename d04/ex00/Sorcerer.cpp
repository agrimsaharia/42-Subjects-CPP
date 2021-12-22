#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Sorcerer &srcr)
{
    os << "I am " << srcr.getName() << ", " << srcr.getTitle() << ", and I like ponies !\n";
    return os;
}

void Sorcerer::polymorph(Victim const &vic) const
{
    vic.getPolymorphed();
}

// void Sorcerer::polymorph(Peon const &peon) const
// {
//     peon.getPolymorphed();
// }

std::string const &Sorcerer::getName() { return name; }
std::string const &Sorcerer::getTitle() { return title; }
