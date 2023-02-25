#include <iostream>

int main(int argc, char* argv[])
{
    std::string argument = argv[argc-1];
    
    bool cb = false, ib = false, fb = false, db = false;
    int i = 0;
    char c = 0;
    float f = 0;
    double d = 0;

    if (argument.size() == 1)
    {
        c = argument[0];
        if (c >= '0' && c <= '9')
        {
            i = c - '0';
            ib = true;
        }
        else if (c < 21 || c == 127) 
        {
            c = 0;
            cb = true;
        }
    }
    else if (argument.back() == 'f') 
    {
        f = std::stof(argument);
        fb = true; 
    }
    else 
    {
        d = std::stod(argument);
        i = d;
        if (d == i*1.0)
        {
            ib = true;
        }
        else 
        {
            db = true;
        }
    }
    std::cout << "char: "; 
    if (cb) 
    {
        if (c == 0) std::cout << "Non displayable" << '\n';
        else std::cout << '\'' << c << '\'';
    }
    else std::cout << "impossible" << '\n';

    std::cout << "int: "; 
    if (ib) std::cout << i << '\n';
    else std::cout << "impossible" << '\n';

    std::cout << "float: "; 
    if (fb) std::cout << f << "f\n";
    else std::cout << "impossible" << '\n';

    std::cout << "double: "; 
    if (db) std::cout << d << '\n';
    else std::cout << "impossible" << '\n';
} 