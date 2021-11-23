#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPointValue = 0;
};

Fixed::Fixed(const int value)
{
    this->fixedPointValue = value * (1 << this->numberOfFractionalBits);
};

Fixed::Fixed(const float value)
{
    this->fixedPointValue = (int)roundf(value * (1 << this->numberOfFractionalBits));
};

Fixed::~Fixed()
{
};

Fixed::Fixed(const Fixed &origin)
{
    *this = origin;
};

Fixed &Fixed::operator=(const Fixed &source)
{
    if (this == &source)
        return (*this);
    this->fixedPointValue = source.getRawBits();
    return (*this);
};

int Fixed::getRawBits(void) const
{
    return (this->fixedPointValue);
};

void Fixed::setRawBits(int const raw)
{
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