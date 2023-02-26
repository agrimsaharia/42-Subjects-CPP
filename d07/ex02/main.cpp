#include <iostream>
#include "Array.hpp"

int main()
{
    Array<std::string> arr;
    std::cout << arr.size() << '\n';

    Array<std::string> arr1(3);
    arr1[0] = "hello";
    arr1[1] = "world";
    arr1[2] = "!";
    std::cout << "arr1: "; 
    for (int i = 0; i < arr1.size(); i++)
    {
        std::cout << arr1[i] << ' ';
    }
    std::cout << std::endl;

    Array<std::string> arr2(arr1);
    std::cout << "arr2: "; 
    for (int i = 0; i < arr2.size(); i++)
    {
        std::cout << arr2[i] << ' ';
    }
    std::cout << std::endl;

    Array<std::string> arr3 = arr1;
    std::cout << "arr3: "; 
    for (int i = 0; i < arr3.size(); i++)
    {
        std::cout << arr3[i] << ' ';
    }
    std::cout << std::endl;
}