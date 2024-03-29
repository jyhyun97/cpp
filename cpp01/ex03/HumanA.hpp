#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name_;
        Weapon*  weapon_;
    public :
        HumanA(std::string name, Weapon &weapon)
        {
            name_ = name;
            weapon_ = &weapon;
        }
        void attack()
        {
            std::cout << name_ << " attacks with his " << weapon_->getType() << std::endl;
        }
};

#endif