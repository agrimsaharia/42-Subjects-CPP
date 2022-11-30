all : main

main : main.o Bureaucrat.o Form.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o Intern.o
	g++ -o main main.o Bureaucrat.o Form.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o Intern.o

main.o : main.cpp Bureaucrat.o Form.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o Intern.o
	g++ -c main.o main.cpp

Bureaucrat.o : Bureaucrat.cpp Bureaucrat.hpp
	g++ -c Bureaucrat.o Bureaucrat.cpp Bureaucrat.hpp

Intern.o : Intern.hpp Intern.cpp Form.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o
	g++ -c Intern.o Intern.hpp Intern.cpp 

Form.o : Form.cpp Form.hpp
	g++ -c Form.o Form.cpp Form.hpp

ShrubberyCreationForm.o : ShrubberyCreationForm.hpp ShrubberyCreationForm.cpp Form.o
	g++ -c ShrubberyCreationForm.o ShrubberyCreationForm.hpp ShrubberyCreationForm.cpp

RobotomyRequestForm.o :  RobotomyRequestForm.hpp RobotomyRequestForm.cpp Form.o
	g++ -c RobotomyRequestForm.o RobotomyRequestForm.hpp RobotomyRequestForm.cpp

PresidentialPardonForm.o : PresidentialPardonForm.hpp PresidentialPardonForm.cpp Form.o
	g++ -c PresidentialPardonForm.o PresidentialPardonForm.hpp PresidentialPardonForm.cpp


clean : 
	rm *.o *.gch *.txt