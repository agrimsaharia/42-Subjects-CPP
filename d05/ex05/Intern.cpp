#include "Intern.hpp"

Form* Intern::makeForm(std::string name, std::string target)
{
    Form *f;
    if (name == "presidential pardon")
    {
        f = new PresidentialPardonForm(target);
        std::cout << "Intern creates <" << name << ">\n";
    }
    else if (name == "robotomy request")
    {
        f = new RobotomyRequestForm(target);
        std::cout << "Intern creates <" << name << ">\n";
    }
    else if (name == "shrubbery creation")
    {
        f = new ShrubberyCreationForm(target);
        std::cout << "Intern creates <" << name << ">\n";
    }
    else 
    {
        throw std::invalid_argument("Intern doesn't know to create <" + name + "> yet!!\n");
        // std::cout << "Intern doesn't know to create <" << name << "> yet!!\n";
    }
    return f;
}