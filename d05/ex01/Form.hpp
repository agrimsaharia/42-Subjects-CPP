#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name_;
    bool isSigned_;    
    const int reqGradeSign_;
    const int reqGradeExec_;

public:
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
       const char* what() const throw();
    }; 

    Form(std::string, int, int);
    std::string getName();
    bool getIsSigned();
    int getReqGradeSign();
    int getReqGradeExec();

    void beSigned(Bureaucrat &);
};

std::ostream &operator<<(std::ostream &, Form &);

#endif