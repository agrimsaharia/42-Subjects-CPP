#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target) {}

void ShrubberyCreationForm::execute_() const
{
    std::string filename = getTarget() + "_shrubbery.txt";
    std::ofstream file(filename);
    file << "ASCII trees";
    file.close();
}