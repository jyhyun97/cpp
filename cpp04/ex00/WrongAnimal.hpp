#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &origin);
        WrongAnimal &operator=(const WrongAnimal &origin);

        void makeSound() const;
        std::string getType() const;
};

#endif