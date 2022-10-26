all : main

main : main.o Bureaucrat.o Form.o
	g++ -o main main.o Bureaucrat.o Form.o

main.o : main.cpp Bureaucrat.o Form.o
	g++ -c main.o main.cpp

Bureaucrat.o : Bureaucrat.cpp Bureaucrat.hpp
	g++ -c Bureaucrat.o Bureaucrat.cpp Bureaucrat.hpp

Form.o : Form.cpp Form.hpp
	g++ -c Form.o Form.cpp Form.hpp

clean : 
	rm *.o *.gch