/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:15:23 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/25 17:15:23 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedPointValue;
    static const int numberOfFractionalBits = 8;

public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed &origin);
    Fixed &operator=(const Fixed &source);
    bool operator>(const Fixed &target);
    bool operator<(const Fixed &target);
    bool operator>=(const Fixed &target);
    bool operator<=(const Fixed &target);
    bool operator==(const Fixed &target);
    bool operator!=(const Fixed &target);
    Fixed operator+(const Fixed target_r);
    Fixed operator-(const Fixed target_r);
    Fixed operator*(const Fixed target_r);
    Fixed operator/(const Fixed target_r);
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    static Fixed &min(Fixed &fix1, Fixed &fix2);
    static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
    static Fixed &max(Fixed &fix1, Fixed &fix2);
    static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif