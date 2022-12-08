#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {return "Too high grade";}

const char* Form::GradeTooLowException::what() const throw() {return "Too low grade";}


Form::Form(std::string name, int reqGradeSign, int reqGradeExec, std::string target) : name_(name), reqGradeExec_(reqGradeExec), reqGradeSign_(reqGradeSign), isSigned_(false), target_(target) 
{
    if (reqGradeSign_ < 1 || reqGradeExec_ < 1) throw Form::GradeTooHighException();
    else if (reqGradeSign_ > 150 || reqGradeExec_ > 150) throw Form::GradeTooLowException();
}

Form::Form(std::string name, int reqGradeSign, int reqGradeExec) : name_(name), reqGradeExec_(reqGradeExec), reqGradeSign_(reqGradeSign), isSigned_(false) 
{
    if (reqGradeSign_ < 1 || reqGradeExec_ < 1) throw Form::GradeTooHighException();
    else if (reqGradeSign_ > 150 || reqGradeExec_ > 150) throw Form::GradeTooLowException();
}

std::string Form::getName() const {return name_;}
std::string Form::getTarget() const {return target_;}
bool Form::getIsSigned() const {return isSigned_;}
int Form::getReqGradeSign() const {return reqGradeSign_;}
int Form::getReqGradeExec() const {return reqGradeExec_;}

std::ostream &operator<<(std::ostream &os, Form &f)
{
    os << f.getName() << ' ' << (f.getIsSigned() ? "is signed" : "is not signed"); 
    return os;
}

void Form::beSigned(Bureaucrat &bu)
{
    if (bu.getGrade() <= reqGradeSign_)
    {
        isSigned_ = true;
    }
    else 
    {
        throw Form::GradeTooLowException();
    }
}

void Form::execute(Bureaucrat const & bu) const
{
    if (bu.getGrade() <= reqGradeExec_)
    {
        this->execute_();
    }
    else 
    {
        throw Form::GradeTooLowException();
    }
}

void Form::execute_() const {}
