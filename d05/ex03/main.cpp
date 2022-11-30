#include <iostream>
#include "Intern.hpp"

int main()
{
    Intern i;
    Form *f1 = i.makeForm("robotomy request", "random target");
    std::cout << *f1 << '\n'; 

    Form *f2 = i.makeForm("robotomy request ", "random target");   /*added a space after the name of form*/
    std::cout << *f2 << '\n';
    
    std::cout << "done" << std::endl;
}