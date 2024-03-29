/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:05:23 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/25 17:05:57 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointValue = 0;
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