#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{
    Base *base;
    int randnum = std::rand() % 3;
    if (randnum == 0)
    {
        base = new A();
        std::cout << "Generated class A" << std::endl;
    }
    else if (randnum == 1)
    {
        std::cout << "Generated class B" << std::endl;
        base = new B();
    }
    else if (randnum == 2)
    {
        std::cout << "Generated class C" << std::endl;
        base = new C();
    }
    return base;
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B *>(p))
    {
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C *>(p))
    {
        std::cout << "C" << std::endl;
    }
}

void identify_from_reference(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::bad_cast &e)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch (std::bad_cast &e)
            {
            }
        }
    }
}

int main()
{
    Base *b = generate();
    identify_from_pointer(b);
    A a;
    Base &base = a;
    identify_from_reference(base);
}