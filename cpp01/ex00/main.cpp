#include <cstdlib>
#include "Zombie.hpp"

std::string randomName(void)
{
    std::string name[5] = {"kim", "lee", "park", "choi", "jung"};
    return (name[rand() % 5]);
}

int main(void)
{
    Zombie* zombie1 = newZombie("zom1");
    Zombie* zombie2 = newZombie("zom2");
    Zombie* zombie3 = newZombie("zom3");

    zombie1->announce();
    zombie2->announce();
    zombie3->announce();

    zombie1->~Zombie();
    zombie2->~Zombie();
    zombie3->~Zombie();

    randomChump(randomName());
    randomChump(randomName());
    randomChump(randomName());

    return (0);
}