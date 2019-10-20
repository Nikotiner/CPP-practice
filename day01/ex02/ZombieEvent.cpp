#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie*  ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name, this->type);
    return (zombie);
}

Zombie*  ZombieEvent::randomChump()
{
    std::string str[5] = {"Svetka", "Holy cow", "Coco", "Dou", "Kick me"};

    Zombie *zombie = new Zombie(str[rand() % 5], this->type);
    zombie->announce();
    return (zombie);
}