#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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

    std::string getName();
    int getGrade();

    void gradeUp();
    void gradeDown();

};

std::ostream &operator<<(std::ostream &, Bureaucrat &);

#endif