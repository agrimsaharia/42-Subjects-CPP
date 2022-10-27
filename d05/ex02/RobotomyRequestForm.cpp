#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target) {}

void RobotomyRequestForm::execute_() const
{
    std::cout << "*Intense drilling noises*" << '\n';
    int randnum = std::rand();
    if (randnum%2) 
    {
        std::cout << "<" << getTarget() << "> has been robotomized" << '\n';
    }
    else 
    {
        std::cout << "Sorry, reqested operation failed :(" << '\n';
    }
}