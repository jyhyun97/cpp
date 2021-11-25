/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:15:20 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/25 17:15:20 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed::~Fixed(){};

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

bool Fixed::operator>(const Fixed &target)
{
    return (this->getRawBits() > target.getRawBits());
};

bool Fixed::operator<(const Fixed &target)
{
    return (this->getRawBits() < target.getRawBits());
};

bool Fixed::operator>=(const Fixed &target)
{
    return (this->getRawBits() >= target.getRawBits());
};

bool Fixed::operator<=(const Fixed &target)
{
    return (this->getRawBits() <= target.getRawBits());
};

bool Fixed::operator==(const Fixed &target)
{
    return (this->getRawBits() == target.getRawBits());
};

bool Fixed::operator!=(const Fixed &target)
{
    return (this->getRawBits() != target.getRawBits());
};

Fixed Fixed::operator+(const Fixed target_r)
{
    Fixed sum;
    sum.setRawBits(this->getRawBits() + target_r.getRawBits());
    return (sum);
};

Fixed Fixed::operator-(const Fixed target_r)
{
    Fixed sum;
    sum.setRawBits(this->getRawBits() - target_r.getRawBits());
    return (sum);
};

Fixed Fixed::operator*(const Fixed target_r)
{
    Fixed sum;
    sum.setRawBits(this->getRawBits() * target_r.getRawBits() >> 8);
    return (sum);
};

Fixed Fixed::operator/(const Fixed target_r)
{
    Fixed sum;
    sum.setRawBits(this->getRawBits() / target_r.getRawBits() << 8);
    return (sum);
};

Fixed &Fixed::operator++(void)
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
};

Fixed &Fixed::operator--(void)
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
};

Fixed Fixed::operator++(int)
{
    Fixed rtn(*this);
    this->setRawBits(this->getRawBits() + 1);
    return (rtn);
};

Fixed Fixed::operator--(int)
{
    Fixed rtn(*this);
    this->setRawBits(this->getRawBits() - 1);
    return (rtn);
};


Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
    if (fix1.getRawBits() < fix2.getRawBits())
        return (fix1);
    else
        return (fix2);
};

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1.getRawBits() < fix2.getRawBits())
        return (fix1);
    else
        return (fix2);
};

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
    if (fix1.getRawBits() > fix2.getRawBits())
        return (fix1);
    else
        return (fix2);
};

const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1.getRawBits() > fix2.getRawBits())
        return (fix1);
    else
        return (fix2);
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
};