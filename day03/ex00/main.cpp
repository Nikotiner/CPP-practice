#include "FragTrap.hpp"

int main()
{
    FragTrap    trap("Holly cow");
    int         i;

    i = -1;
    trap.takeDamage(300);
    trap.beRepaired(200);
    trap.meleeAttack("Skuzi");
    trap.rangedAttack("Skuzi");
    while (++i < 5)
        trap.vaulthunter_dot_exe("Skuzi");
    return (0);
}