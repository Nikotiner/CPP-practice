#include "SuperTrap.hpp"

int main()
{
    SuperTrap frag("Bulka");

    frag.meleeAttack("Skuzi");
    frag.rangedAttack("Skuzi");
    frag.takeDamage(25);
    frag.beRepaired(10);
    return (0);
}
