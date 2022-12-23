#include "CentralBureaucracy.hpp"


CentralBureaucracy::CentralBureaucracy() 
{
    office_d_idx_ = 0;
    forms_[0] = "presidential pardon";
    forms_[1] = "robotomy request";
    forms_[2] = "shrubbery creation";
}

void CentralBureaucracy::feedBureaucrat(Bureaucrat &bureaucrat)
{
    if (office_d_idx_ == 40) std::cout << "Bureaucrat <" << bureaucrat.getName() << "> cannot be assigned to an Office Block" << '\n'; 
    else if (office_d_idx_%2) 
    {
        offices_[office_d_idx_/2].setSigner(bureaucrat);
        office_d_idx_++;
    }
    else 
    {
        offices_[office_d_idx_/2].setExecutor(bureaucrat);
        offices_[office_d_idx_/2].setIntern(*(new Intern()));
        office_d_idx_++;
    }
}

void CentralBureaucracy::feedBureaucrat(Bureaucrat bureaucrat[], int size)
{
    for (int i = 0; i < size; i++)
    {
        feedBureaucrat(bureaucrat[i]);
    }
}   

void CentralBureaucracy::queueUp(std::string name)
{
    if (queue_idx_ < 20)
    {
        queue_[queue_idx_++] = name;
    }
    else std::cout << "Queue full" << '\n';
}

void CentralBureaucracy::doBureaucracy()
{
    if (office_d_idx_ < 2) return;
    for (int i = 0; i < queue_idx_; i++)
    {
        offices_[std::rand()%(office_d_idx_/2)].doBureaucracy(forms_[std::rand()%3], queue_[i]);
    }
    queue_idx_ = 0;
}