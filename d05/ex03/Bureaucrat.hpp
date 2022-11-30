#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string name_;
    int grade_;
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

    Bureaucrat(std::string, int);

    std::string getName() const;
    int getGrade() const;

    void gradeUp();
    void gradeDown();

    void signForm(Form &);
    void executeForm(Form const &);

};

std::ostream &operator<<(std::ostream &, Bureaucrat &);

#endif