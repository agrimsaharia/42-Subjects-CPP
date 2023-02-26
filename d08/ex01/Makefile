all : main

main : main.cpp span
	g++ -o main main.cpp span.o

span : span.cpp span.hpp
	g++ -c span.o span.hpp span.cpp