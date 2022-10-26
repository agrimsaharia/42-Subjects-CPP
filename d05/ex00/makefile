all : main

main : main.o Bureaucrat.o
	g++ -o main main.o Bureaucrat.o

main.o : main.cpp Bureaucrat.o
	g++ -c main.o main.cpp

Bureaucrat.o : Bureaucrat.cpp Bureaucrat.hpp
	g++ -c Bureaucrat.o Bureaucrat.cpp Bureaucrat.hpp

clean : 
	rm *.o *.gch