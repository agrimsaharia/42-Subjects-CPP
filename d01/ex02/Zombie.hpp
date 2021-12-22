#ifndef blablabla
#define blablabla

#include<iostream>
#include<string>

std::string names[5] = {"Gangu Teli", "Godhasur", "Chhaprasi Lala", "Jummbie", "Aaloo Tamatar"};

class Zombie
{
private:
    std::string type = "Default", name = "Default";
public:
    Zombie();
    Zombie(std::string name_);
    Zombie(std::string name_, std::string type_);
    void setName(std::string name_);
    void announce();
};

void Zombie::setName(std::string name_)
{
    name = name_;
}

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name_, std::string type_)
{
    name = name_;
    type = type_;
}

Zombie::Zombie(std::string name_)
{
    name = name_;
}

void Zombie::announce()
{
    std::cout << "<" << name << "(" << type << ")> Plms gib brain..." << std::endl;
}


#endif