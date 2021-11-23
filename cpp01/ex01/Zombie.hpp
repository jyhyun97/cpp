#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private :
        std::string zombie_name;
    public :
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        void    SetName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif