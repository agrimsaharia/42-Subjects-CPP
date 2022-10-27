#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat b1("Agrim", 1), b2("John", 6), b3("Blake", 46), b4("Dwight", 138);
    Form f1("hello", 13, 3), f2("bye", 1, 12, "blablabla");

    ShrubberyCreationForm f3("shrub");
    RobotomyRequestForm f4("robot");
    PresidentialPardonForm f5("president");

    b1.executeForm(f3);
    b1.executeForm(f4);
    b1.executeForm(f5);
    
    b2.executeForm(f3);
    b2.executeForm(f4);
    b2.executeForm(f5);
    
    b3.executeForm(f3);
    b3.executeForm(f4);
    b3.executeForm(f5);
    
    std::cout << "done" << std::endl;
}