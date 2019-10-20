#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieEvent zEvent;
    Zombie      *zombie;
    int         i;

    i = -1;
    zEvent.setZombieType("static");
    zombie = zEvent.newZombie("Skuzi");
    zombie->announce();
    delete zombie;
    while (++i < 5)
    {
        zEvent.setZombieType("random");
        zEvent.setZombieType("random");
        zombie = zEvent.randomChump();
        delete zombie;
    }
    return (0);
}