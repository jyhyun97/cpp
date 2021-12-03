#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat class constructor~~" << std::endl;
    type = "WrongCat";
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class destructor~~" << std::endl;
};

WrongCat::WrongCat(const WrongCat &origin)
{
    std::cout << "WrongCat class copy constructor~~" << std::endl;
    *this = origin;
};

WrongCat &WrongCat::operator=(const WrongCat &origin)
{
    std::cout << "WrongCat class assignment operator~~" << std::endl;
    if (this == &origin)
        return (*this);
    this->type = origin.type;
    return (*this);
};

void WrongCat::makeSound() const
{
    std::cout << "nyang nyang" << std::endl;
};