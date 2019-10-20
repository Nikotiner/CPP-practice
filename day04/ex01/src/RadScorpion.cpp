#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}
RadScorpion::RadScorpion(const RadScorpion &en) : Enemy(en)
{	
}
RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
RadScorpion &RadScorpion::operator=(const RadScorpion &en)
{
	Enemy::operator=(en);
	return (*this);
}

// void		RadScorpion::takeDamage(int)
// {

// }
