#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

std::string const &Victim::getName() { return name; }

std::ostream &operator<<(std::ostream &os, Victim &vic)
{
    os << "I'm " << vic.getName() << " and I like otters ! \n";
    return os;
}

void Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}
