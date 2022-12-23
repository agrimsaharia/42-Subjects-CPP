#include <iostream>
#include "CentralBureaucracy.hpp"

int main()
{
    CentralBureaucracy cb;

    for (int i = 0; i < 20; i++)
    {
        std::string name = "Bureaucrat_" + std::to_string(i);
        Bureaucrat *bu = new Bureaucrat(name, std::rand()%150 + 1);
        cb.feedBureaucrat(*bu);
    }
    for (int i = 0; i < 20; i++)
    {
        std::string name = "Target_" + std::to_string(i);
        cb.queueUp(name);
    }
    
    cb.doBureaucracy();

}
