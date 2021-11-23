#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[N];
    int i;
    std::stringstream stream;
    i = 0;
    while (i < N)
    {
        stream << i;
        horde[i].SetName(name + stream.str());
        stream.str(std::string());
        i++;
    }
    return (horde);
}