/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:07:21 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/25 17:07:24 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    return (this->fixedPointValue);
};

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
};

int Fixed::toInt(void) const
{
    return (this->fixedPointValue / (1 << this->numberOfFractionalBits));
};

float Fixed::toFloat(void) const
{
    return ((float)this->fixedPointValue / (float)(1 << this->numberOfFractionalBits));
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
};