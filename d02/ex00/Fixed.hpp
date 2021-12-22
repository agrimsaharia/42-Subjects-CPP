#pragma once

#include<iostream>

class Fixed
{
private:
    int fpval;
    const static int frcBits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    void operator=(const Fixed &obj);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
