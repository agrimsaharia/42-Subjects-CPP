#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v(12, 3);
    std::cout << *easyfind(v, 3) << '\n';
    std::cout << *easyfind(v, 4) << '\n';
}