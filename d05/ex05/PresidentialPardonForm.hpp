#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    void execute_() const;
public:
    PresidentialPardonForm(std::string);
};

#endif