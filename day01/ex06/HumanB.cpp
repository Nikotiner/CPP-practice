#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string n) : name(n)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack() const
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}
