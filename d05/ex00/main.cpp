#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat b1("Agrim", 1), b2("Saharia", 150);
    std::cout << b1 << '\n';
    std::cout << b2 << '\n';
    try
    {
        b2.gradeUp();
        b1.gradeDown();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
    }
    
    try
    {
        b1.gradeUp();
        b1.gradeUp();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
    }

    try
    {
        b2.gradeDown();
        b2.gradeDown();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "done" << std::endl;
}