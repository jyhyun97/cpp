#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int fixedPointValue;//32비트
        static const int  numberOfFractionalBits = 8;
    
    public :
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        Fixed(const Fixed& origin);
        Fixed &operator=(const Fixed &source);
        bool operator>(const Fixed &target)
        {
            return (this->fixedPointValue > target.getRawBits());
        };
        bool operator<(const Fixed &target)
        {
            return (this->fixedPointValue < target.getRawBits());
        };
        bool operator>=(const Fixed &target)
        {
            return (this->fixedPointValue >= target.getRawBits());
        };
        bool operator<=(const Fixed &target)
        {
            return (this->fixedPointValue <= target.getRawBits());
        };
        bool operator==(const Fixed &target)
        {
            return (this->fixedPointValue == target.getRawBits());
        };
        bool operator!=(const Fixed &target)
        {
            return (this->fixedPointValue != target.getRawBits());
        };

        Fixed operator+(const Fixed target_r)
        {
            Fixed sum;
            sum.setRawBits(this->getRawBits() + target_r.getRawBits());
            return (sum);
        };
        
        Fixed operator-(const Fixed target_r)
        {
            Fixed sum;
            sum.setRawBits(this->getRawBits() - target_r.getRawBits());
            return (sum);
        };
        
        Fixed operator*(const Fixed target_r)
        {
            Fixed sum;
            sum.setRawBits(this->getRawBits() * target_r.getRawBits() >> 8);
            return (sum);
        };
        
        Fixed operator/(const Fixed target_r)
        {
            Fixed sum;
            sum.setRawBits(this->getRawBits() / target_r.getRawBits() << 8);
            return (sum);
        };

        Fixed &operator++(void)
        {
            this->fixedPointValue++;
            return (*this);
        };
        Fixed &operator--(void)
        {
            this->fixedPointValue--;
            return (*this);
        };
        Fixed operator++(int)//int는 매개변수 받는 의미가 아니라 전위 후위 구분을 위한 것
        {
            Fixed rtn(this->fixedPointValue);
            rtn.fixedPointValue >>= 7;
            return (rtn);
        }
        Fixed operator--(int)
        {
            Fixed rtn(this->fixedPointValue);
            rtn.fixedPointValue <<= 7;
            return (rtn);
        }
        static Fixed &min(Fixed &fix1, Fixed &fix2)
        {
            if (fix1.getRawBits() < fix2.getRawBits())
                return (fix1);
            else
                return (fix2);
        }
        static const Fixed &min(const Fixed &fix1, const Fixed &fix2)
        {
            if (fix1.getRawBits() < fix2.getRawBits())
                return (fix1);
            else
                return (fix2);
        }
        static Fixed &max(Fixed &fix1, Fixed &fix2)
        {
            if (fix1.getRawBits() > fix2.getRawBits())
                return (fix1);
            else
                return (fix2);
        }
        static const Fixed &max(const Fixed &fix1, const Fixed &fix2)
        {
            if (fix1.getRawBits() > fix2.getRawBits())
                return (fix1);
            else
                return (fix2);
        }

        /*
        >, <, >=, <=, == and !=[끝]
        +, -, *, and /.[끝]
        ++a, a++, --a, a-- [끝]
        min(), min(const), max(), max(const) [끝]

        다 만들었고 테스트 하기 -> 리팩토링 하기 반복
        */
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt(void) const;

};


#endif