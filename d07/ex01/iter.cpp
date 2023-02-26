#include <iostream>

template <typename T>
void iter(T *array, size_t len, void (*function)(T &))
{
    for (size_t i = 0; i < len; i++)
    {
        function(*(array + i));
    }
}

void add2(int &a)
{
    a += 2;
}

int main()
{
    int array[10] = { 1,
                      2,
                      4,
                      4,
                      5,
                      6,
                      7,
                      7,
                      8,
                      9 };
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    
    iter(array, 10, add2);
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    
}