#pragma once
#include<iostream>
#include<sstream>

class Brain
{
private:
    int IQ;
public:
    Brain();
    ~Brain();
    std::string identify() const;
};

std::string Brain::identify() const
{
    std::stringstream s;
    s << this;
    return s.str();
}

Brain::Brain()
{
}

Brain::~Brain()
{
}
