#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name)
{
    if (grade < 1) throw Bureaucrat::GradeTooHighException();
    else if (grade > 150) throw Bureaucrat::GradeTooLowException();
    else grade_ = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {return "Too high grade";}

const char* Bureaucrat::GradeTooLowException::what() const throw() {return "Too low grade";}


std::string Bureaucrat::getName()
{
    return name_;
}

int Bureaucrat::getGrade()
{
    return grade_;
}

void Bureaucrat::gradeUp()
{
    if (grade_ == 1) 
    {
        throw Bureaucrat::GradeTooHighException();
    }
    grade_--;
    std::cout << "Upgraded to : " << grade_ << std::endl;
}

void Bureaucrat::gradeDown()
{
    if (grade_ == 150) 
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade_++;
    std::cout << "Downgraded to : " << grade_ << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << "<" << name_ << "> signs <" << f.getName() << ">" << '\n';
    }
    catch (std::exception &e)
    {
        std::cout << "<" << name_ << "> cannot sign <" << f.getName() << "> because <" << e.what() << ">" << '\n';
    }
}
