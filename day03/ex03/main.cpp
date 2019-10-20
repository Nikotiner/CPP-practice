#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    NinjaTrap   ninja("Sram");
    ScavTrap    scav("Skuzi");
    FragTrap    frag("Holy cow");

    ninja.takeDamage(16);
    ninja.beRepaired(12);
    ninja.rangedAttack(scav.getName());
    ninja.meleeAttack(frag.getName());
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(frag);
    return (0);
}
