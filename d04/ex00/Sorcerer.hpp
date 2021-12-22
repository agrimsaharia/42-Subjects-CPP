#pragma once

#include "Victim.hpp"
#include <iostream>
#include <string>
#include "Peon.hpp"

class Sorcerer
{
private:
    std::string name, title;

public:
    Sorcerer(std::string name, std::string title);
    std::string const &getName();
    std::string const &getTitle();
    void polymorph(Victim const &vic) const;
    // void polymorph(Peon const &peon) const;
    ~Sorcerer();
};

std::ostream &operator<<(std::ostream &os, Sorcerer &srcr);
