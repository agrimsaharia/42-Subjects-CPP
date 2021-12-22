#pragma once

#include<string>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string type_);
    ~Weapon();
    const std::string* getType();
    void setType(std::string type_);
};

Weapon::Weapon(std::string type_)
{
    type = type_;
}

void Weapon::setType(std::string type_)
{
    type = type_;
}

const std::string* Weapon::getType()
{
    return &type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
