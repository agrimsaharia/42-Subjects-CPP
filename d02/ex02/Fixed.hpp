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
    bool operator>(const Fixed &obj);
    bool operator<(const Fixed &obj);
    bool operator>=(const Fixed &obj);
    bool operator<=(const Fixed &obj);
    bool operator==(const Fixed &obj);
    bool operator!=(const Fixed &obj);
    Fixed& operator-(const Fixed &obj);
    Fixed& operator+(const Fixed &obj);
    Fixed& operator/(const Fixed &obj);
    Fixed& operator*(const Fixed &obj);
    Fixed operator--(int);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    static Fixed& min(Fixed &f1, Fixed &f2);
    static Fixed& max(Fixed &f1, Fixed &f2);
    static const Fixed& min(const Fixed &f1, const Fixed &f2);
    static const Fixed& max(const Fixed &f1, const Fixed &f2);
};

std::ostream& operator<<(std::ostream &os, Fixed const &fp);