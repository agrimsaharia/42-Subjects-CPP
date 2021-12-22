#pragma once

#include "Brain.hpp"

class Human
{
private:
    const Brain* b;
public:
    Human();
    ~Human();
    std::string identify();
    const Brain& getBrain() const;
};

const Brain& Human::getBrain() const
{
    return *b;
}

std::string Human::identify()
{
    return b->identify();
}

Human::Human()
{
    b = new Brain();
}

Human::~Human()
{
}
