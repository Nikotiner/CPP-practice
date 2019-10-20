#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
private:
    int     quantity;
    Zombie  *zombies;
public:
    ZombieHorde(int quantity);
    Zombie  *getZombies() const;
    ~ZombieHorde();
};

#endif