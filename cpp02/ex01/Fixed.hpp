#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int fixedPointValue;
        static const int  numberOfFractionalBits = 8;
    public :
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed(const Fixed& origin);
        Fixed& operator = (const Fixed& source);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt(void) const;
};

//• An overload to the « operator that inserts a floating point representation of the
//fixed point value into the parameter output stream.


#endif