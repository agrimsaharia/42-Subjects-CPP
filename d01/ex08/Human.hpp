#pragma once

#include<iostream>

struct action_num;

class Human
{
private:
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
    void intimidatingShout(std::string const &target);
public:
    void action(std::string const &action_name, std::string const &target);
    static action_num ptrarray[3];
};

struct action_num
{
    std::string action;
    void (Human::*ptr)(std::string const&);
};

void Human::action(std::string const &action_name, std::string const &target)
{
    for(auto ele : Human::ptrarray)
    {
        if (ele.action == action_name)
        {   
            (this->*ele.ptr)(target);
            break;
        }
    }
}

void Human::meleeAttack(std::string const &target)
{
    std::cout << "Hehe, take my melee in.. you " << target << '\n';
}

void Human::rangedAttack(std::string const &target)
{
    std::cout << "Hehe, shot " << target << " from a distance!" << '\n';
}

void Human::intimidatingShout(std::string const &target)
{
    std::cout << "Time.. to.. suffer my wrath you " << target << '\n';
}
