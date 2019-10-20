#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap    trap("Holly cow");
    ScavTrap    strap("Suzi");
    int         i;

    i = -1;
    trap.takeDamage(50);
    strap.takeDamage(100);
    trap.beRepaired(20);
    strap.beRepaired(200);
    trap.rangedAttack("Suzi");
    strap.meleeAttack("Holly cow");
    while (++i < 4)
        trap.vaulthunter_dot_exe("Suzi");
    i = -1;
    while (++i < 5)
        strap.challengeNewcomer("Holly cow");
    return (0);
}