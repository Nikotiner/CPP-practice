#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack() const
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}