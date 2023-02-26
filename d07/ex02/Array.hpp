#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
    T *array_;
    unsigned int size_;

public:
    class OutOfBoundException : public std::exception
    {
    public:
        const char* what() noexcept(true)
        {
            return "Array index is out of bound";
        }
    };
    Array<T>()
    {
        array_ = nullptr;
        size_ = 0;
    }
    Array<T>(unsigned int n)
    {
        array_ = new T[n];
        size_ = n;
    }
    Array<T>(Array<T> const &array_n)
    {
        *this = array_n;
    }
    Array<T> &operator=(Array<T> const &array_n)
    {
        size_ = array_n.size_;
        array_ = new T[size_];
        for (unsigned int i = 0; i < size_; i++)
        {
            array_[i] = array_n[i];
        }
        return *this;
    }
    unsigned int size()
    {
        return size_;
    }
    T &operator[](unsigned int i) const
    {
        if (i >= size_) throw(OutOfBoundException());
        return array_[i];
    }
};

#endif /* ARRAY_HPP */
