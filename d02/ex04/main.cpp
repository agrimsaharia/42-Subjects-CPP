#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include "Fixed.hpp"

Fixed &operate(Fixed &f1, Fixed &f2, std::string op)
{
    if (op == "*") return (f1*f2);
    else if (op == "/") return (f1/f2);
    else if (op == "+") return (f1+f2);
    else if (op == "-") return (f1-f2);
    else  return f1;
}

Fixed recurse(std::queue<std::string> &qu)
{
    Fixed a, b;
    bool init = false;
    std::string op;
    while(qu.front() != ")")
    {
        if (qu.front() == "(")
        {
            qu.pop();
            // if (qu.front() == ")")
            // {
            //     qu.pop();
            // }
            if (init)
            {
                b = recurse(qu);
                a = operate(a, b, op);
            }
            else 
            {
                a = recurse(qu);
                init = true;
            }
        }
        else 
        {
            if (!init)
            {
                a = std::stof(qu.front());
                init = true;
            }
            else if (op == "")
            {
                op = qu.front();
            }
            else
            {
                b = std::stof(qu.front());
                a = operate(a, b, op);
                op = "";
            }
            qu.pop();
        }
    }
    qu.pop();
    return a;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid argument!" << std::endl;
        return 0;
    }
    std::istringstream ss(argv[1]);
    std::string ele;
    std::queue<std::string> qu;
    qu.push("(");
    int open = 0;
    while(ss >> ele)
    {
        if (ele == "(") open++;
        else if (ele == ")") open--;
        if (open < 0) 
        {
            std::cout << "Invalid expression : Brackets not correct!" << std::endl;
            return 0;
        }
        qu.push(ele);
    }
    if (open != 0)
    {
        std::cout << "Invalid expression : Brackets not correct!" << std::endl;
        return 0;
    }
    qu.push(")");
    qu.pop(); 
    std::cout << recurse(qu) << '\n';
    return 0;
}