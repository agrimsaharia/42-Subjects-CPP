#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("Agrim", 14), b2("Saharia", 1);
    std::cout << b1 << '\n';
    std::cout << b2 << '\n';

    Form f1("hello", 13, 3), f2("bye", 1, 12);

    try
    {
        b1.signForm(f1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
    }
    
    try
    {
        b2.signForm(f1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "done" << std::endl;
}