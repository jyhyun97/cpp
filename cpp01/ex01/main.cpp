#include "Zombie.hpp"

void    zombieDestroy(int N, Zombie *horde)
{
    int i;
    i = 0;
    while(i < N)
    {
        horde[i].~Zombie();
        i++;
    }
}

int main(void)
{
    int size = 5;
    int i = 0;
    Zombie* horde = zombieHorde(size, "name");
    while (i < size)
    {
        horde[i].announce();
        i++;
    }
    zombieDestroy(size, horde);
    return (0);
}
