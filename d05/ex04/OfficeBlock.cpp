#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : intern(nullptr), signBureaucrat(nullptr), execBureaucrat(nullptr) {}

OfficeBlock::OfficeBlock(Intern& intern_, Bureaucrat& signBureaucrat_, Bureaucrat& execBureaucrat_) : intern(&intern_), signBureaucrat(&signBureaucrat_), execBureaucrat(&execBureaucrat_) {}

void OfficeBlock::setIntern(Intern &intern_) { intern = &intern_;}

void OfficeBlock::setSigner(Bureaucrat &signBureaucrat_) { signBureaucrat = &signBureaucrat_;}

void OfficeBlock::setExecutor(Bureaucrat &execBureaucrat_) { execBureaucrat = &execBureaucrat_;}

// ake the intern create the requested form, have the second bureaucrat sign it, and have the second bureaucrat execute i
void OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
    if (intern == nullptr) throw OfficeBlock::InternNotInitialised();
    if (signBureaucrat == nullptr) throw OfficeBlock::SignerNotInitialised();
    if (execBureaucrat == nullptr) throw OfficeBlock::ExecutorNotInitialised();

    Form *form;
    try
    {
        form = intern->makeForm(formName, target);
    }
    catch (std::invalid_argument &e)
    {
        throw OfficeBlock::InvalidFormRequest();
    }
    try
    {
        signBureaucrat->signForm(*form);
    }
    catch (Form::GradeTooLowException &e)
    {
        throw OfficeBlock::SignerGradeTooLow();
    }
    try
    {
        execBureaucrat->executeForm(*form);
    }
    catch (Form::GradeTooLowException &e)
    {
        throw OfficeBlock::ExecutorGradeTooLow();
    }

    std::cout << "Bureauracy done" << '\n';
}

const char* OfficeBlock::InternNotInitialised::what() const throw()
{
    return "Intern is not Ininitalised";
}

const char* OfficeBlock::SignerNotInitialised::what() const throw()
{
    return "Signer is not Ininitalised";
}

const char* OfficeBlock::ExecutorNotInitialised::what() const throw()
{
    return "Executor is not Ininitalised";
}

const char* OfficeBlock::ExecutorGradeTooLow::what() const throw()
{
    return "Executor grade is too low";
}

const char* OfficeBlock::SignerGradeTooLow::what() const throw()
{
    return "Signer grade is too low";
}

const char* OfficeBlock::InvalidFormRequest::what() const throw()
{
    return "Intern doesn't know how to make this form";
}