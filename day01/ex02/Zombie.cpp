#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string n, std::string t) : type(t), name(n)
{
}

Zombie::Zombie(std::string n) : name(n)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}