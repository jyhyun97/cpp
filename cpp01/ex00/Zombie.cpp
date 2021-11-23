#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    zombie_name = name;
    std::cout << "Zombie <" << zombie_name << "> Created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie <" << zombie_name << "> Destroyed!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<" << zombie_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
