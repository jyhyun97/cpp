/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:06:01 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/25 17:06:03 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int fixedPointValue;
        static const int  numberOfFractionalBits = 8;
    public :
        Fixed();
        ~Fixed();
        Fixed(const Fixed &origin);
        Fixed &operator=(const Fixed &source);
        int getRawBits(void) const;
        void setRawBits( int const raw );
};

#endif