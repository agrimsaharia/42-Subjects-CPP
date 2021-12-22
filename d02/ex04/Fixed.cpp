#include "Fixed.hpp"

Fixed::Fixed(const Fixed &obj)
{
    // std::cout << "Copy constructor called" << '\n';
    fpval = obj.fpval;
}

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << '\n';
    fpval = 0;
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" << '\n';
    fpval = (num << frcBits);
}

Fixed::Fixed(const float num)
{
    // std::cout << "Float constructor called" << '\n';
    fpval = roundf(num * (1 << frcBits));
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << '\n';
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << '\n';
    return fpval;
}

void Fixed::setRawBits(int const raw)
{
    fpval = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)fpval) / (1 << frcBits);
}

int Fixed::toInt(void) const
{
    return (fpval >> frcBits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fp)
{
    return (os << fp.toFloat());
}

void Fixed::operator=(const Fixed &obj)
{
    // std::cout << "Assignation operator called" << '\n';
    fpval = obj.fpval;
}

bool Fixed::operator<(const Fixed &obj)
{
    return (fpval < obj.fpval);
}

bool Fixed::operator>(const Fixed &obj)
{
    return (fpval > obj.fpval);
}

bool Fixed::operator>=(const Fixed &obj)
{
    return (fpval >= obj.fpval);
}

bool Fixed::operator<=(const Fixed &obj)
{
    return (fpval <= obj.fpval);
}

bool Fixed::operator==(const Fixed &obj)
{
    return (fpval == obj.fpval);
}

bool Fixed::operator!=(const Fixed &obj)
{
    return (fpval != obj.fpval);
}

Fixed &Fixed::operator-(const Fixed &obj)
{
    Fixed *f = new Fixed();
    f->fpval = (fpval - obj.fpval);
    return *f;
}

Fixed &Fixed::operator+(const Fixed &obj)
{
    Fixed *f = new Fixed();
    f->fpval = (fpval + obj.fpval);
    return *f;
}

Fixed &Fixed::operator*(const Fixed &obj)
{
    Fixed *f = new Fixed();
    long n1 = fpval;
    long n2 = obj.fpval;
    f->fpval = ((n1 * n2) / (1 << frcBits));
    return *f;
}

Fixed &Fixed::operator/(const Fixed &obj)
{
    Fixed *f = new Fixed();
    f->fpval = (fpval*(1 << frcBits) / obj.fpval);
    return *f;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --*this;
    return temp;
}

Fixed& Fixed::operator++()
{
    fpval++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++*this;
    return temp;
}

Fixed& Fixed::operator--()
{
    fpval--;
    return *this;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits()) return f1;
    return f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits()) return f1;
    return f2;
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits()) return f1;
    return f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits()) return f1;
    return f2;
}
