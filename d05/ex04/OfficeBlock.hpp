#ifndef OFFICE_BLOCK_HPP
#define OFFICE_BLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <exception>

class OfficeBlock
{    
private:
    Intern *intern;
    Bureaucrat *signBureaucrat;
    Bureaucrat *execBureaucrat;
public:
    OfficeBlock();
    OfficeBlock(Intern&, Bureaucrat&, Bureaucrat&);
    void operator=(const OfficeBlock&) = delete;
    OfficeBlock(const OfficeBlock&) = delete;
    void setIntern(Intern &);
    void setSigner(Bureaucrat &);
    void setExecutor(Bureaucrat &);
    void doBureaucracy(std::string, std::string);
    class InternNotInitialised : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class SignerNotInitialised : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class ExecutorNotInitialised : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class SignerGradeTooLow : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class ExecutorGradeTooLow : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class InvalidFormRequest : public std::exception
    {
    public:
        const char* what() const throw();
    };

};

#endif