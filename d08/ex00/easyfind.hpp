#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &t, int i)
{
    typename T::iterator iter = t.begin();
    for (; iter != t.end(); iter++)
    {
        if (*iter == i) return iter;
    }
    throw std::runtime_error("Integer value not found in the given container");
    return t.end();
}
