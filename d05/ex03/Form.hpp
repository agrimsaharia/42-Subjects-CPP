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
    const std::string target_;
    virtual void execute_() const;

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
    Form(std::string, int, int, std::string);

    std::string getName() const;
    bool getIsSigned() const;
    int getReqGradeSign() const;
    int getReqGradeExec() const;
    std::string getTarget() const;

    void beSigned(Bureaucrat &);
    void execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &, Form &);

#endif