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
        Fixed(const Fixed& origin);
        Fixed& operator = (const Fixed& source);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif