#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap    strap("Suzi");
    int         i;

    i = -1;
    strap.takeDamage(50);
    strap.beRepaired(20);
    strap.rangedAttack("Holly cow");
    strap.meleeAttack("Holly cow");
    while (++i < 5)
        strap.challengeNewcomer("Holly cow");
    return (0);
}