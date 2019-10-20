#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &rifle) : AWeapon(rifle)
{

}
PowerFist &PowerFist::operator=(const PowerFist &rifle)
{
	AWeapon::operator = (rifle);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}