#ifndef SHRUBBERY_CRATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    void execute_() const;
public:
    ShrubberyCreationForm(std::string);
};

#endif
