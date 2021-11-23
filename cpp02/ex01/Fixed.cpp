#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointValue = 0;
};

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = value * (1 << this->numberOfFractionalBits);
};

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = (int)roundf(value * (1 << this->numberOfFractionalBits));
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &origin)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = origin;
};

Fixed &Fixed::operator=(const Fixed &source)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &source)
        return (*this);
    this->fixedPointValue = source.getRawBits();
    return (*this);
};

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
};

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
};

float Fixed::toFloat(void) const
{
    return ((float)this->fixedPointValue / (float)(1 << this->numberOfFractionalBits));
};

int Fixed::toInt(void) const
{
    return (this->fixedPointValue / (1 << this->numberOfFractionalBits));
};