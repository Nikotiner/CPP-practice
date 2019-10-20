#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent(/* args */);
    ~ZombieEvent();
    Zombie* newZombie(std::string name);
    void    setZombieType(std::string type);
    Zombie* randomChump();
};

#endif