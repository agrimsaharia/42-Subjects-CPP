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

void Fixed::operator = (const Fixed &obj)
{
    std::cout << "Assignation operator called" << '\n';
    fpval = obj.fpval;
}
