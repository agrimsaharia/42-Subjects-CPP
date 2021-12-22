#pragma once

#include <iostream>
#include <cmath>
// #include <string>

class Fixed
{
private:
    int fpval;
    const static int frcBits = 8;

public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    Fixed(const Fixed &obj);
    void operator=(const Fixed &obj);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fp);
