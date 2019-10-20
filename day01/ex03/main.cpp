#include "ZombieHorde.hpp"
#include "Zombie.hpp"

void tmp()
{
    ZombieHorde *zHorde = new ZombieHorde(5);
    delete zHorde;
}

int main()
{
    tmp();
    system("leaks zombie");
    return (0);
}