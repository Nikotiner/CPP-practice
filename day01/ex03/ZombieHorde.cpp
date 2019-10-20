#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int quantity)
{
    std::cout << "Horde created " << quantity << " minions" << std::endl;
    int         i;
    std::string str[5] = {"Svetka", "Holy cow", "Coco", "Dou", "Kick me"};
    
    i = -1;
    this->zombies = new Zombie[quantity];
    this->quantity = quantity;
    while(++i < quantity)
    {
        this->zombies[i] = Zombie(str[rand() % 5], "random");
        this->zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "Horde died" << std::endl;
    delete []this->zombies;
}

Zombie  *ZombieHorde::getZombies() const
{
    return (this->zombies);
}
