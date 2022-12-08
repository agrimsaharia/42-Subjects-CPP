#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    void execute_() const;
public:
    RobotomyRequestForm(std::string);
};

#endif
