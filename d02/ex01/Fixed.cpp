#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << '\n';
    return fpval;
}

void Fixed::setRawBits(int const raw)
{
    fpval = raw;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << '\n';
    fpval = obj.fpval;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << '\n';
    fpval = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << '\n';
}

void Fixed::operator=(const Fixed &obj)
{
    std::cout << "Assignation operator called" << '\n';
    fpval = obj.fpval;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << '\n';
    fpval = (num << frcBits);
}

float Fixed::toFloat(void) const
{
    return ((float)fpval) / (1 << frcBits);
}

int Fixed::toInt(void) const
{
    return (fpval>>frcBits);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << '\n';
    fpval = roundf(num*(1<<frcBits));
}

std::ostream& operator<<(std::ostream &os, Fixed const &fp)
{
    return (os << fp.toFloat());
}

