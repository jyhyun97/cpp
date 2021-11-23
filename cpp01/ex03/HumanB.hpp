#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name_;
        Weapon*  weapon_;
    public :
        HumanB(std::string name) : name_(name) {};
        void setWeapon(Weapon &weapon)
        {
            weapon_ = &weapon;
        }
        void attack()
        {
            std::cout << name_ << " attacks with his " << weapon_->getType() << std::endl;
        }
};

#endif