#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5, target) {}

void PresidentialPardonForm::execute_() const
{
    std::cout << "<" << getTarget() << "> has been pardoned by Zafod Beeblebrox" << '\n';
}
