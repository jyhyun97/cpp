#include <iostream>
#include "Fixed.hpp"

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
};

int main(void)
{
    //리팩토링 하면서 프라이빗 변수 건드린 경우 다 get set으로 수정하기

    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;//비정적 멤버 참조는 특정 개체에 상대적이어야합니다
    //
    return 0;
}