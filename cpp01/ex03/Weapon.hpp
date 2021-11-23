#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon(std::string str)
        {
            type = str;
        }
        std::string getType()
        {
            const std::string& ref = type;
            return (ref);
        }
        void        setType(std::string str)
        {
            type = str;
        }
};

#endif