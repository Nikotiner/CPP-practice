#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &en) : Enemy(en)
{	
}
SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}
SuperMutant &SuperMutant::operator=(const SuperMutant &en)
{
	Enemy::operator=(en);
	return (*this);
}

void		SuperMutant::takeDamage(int dm)
{
	Enemy::takeDamage((dm - 3 < 0)? 0 : dm - 3);
}