#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void tester()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* wr = new AssaultTerminator;
    Squad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    ISquad *vlc2 = new Squad(*vlc);
    vlc2->push(wr);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    delete vlc2;
}

int main()
{
    tester();
    system("leaks -q game");
    return 0;
}