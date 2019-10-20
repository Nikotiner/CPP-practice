#include "Human.hpp"

Human::Human()
{
    this->pointers[0] = &Human::meleeAttack;
    this->pointers[1] = &Human::rangedAttack;
    this->pointers[2] = &Human::intimidatingShout;
}

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee atack to " << target <<std::endl;
}
void Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged atack to " << target <<std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Intimidating shout to " << target <<std::endl;
}
void Human::action(std::string const & action_name, std::string const & target)
{
    std::string array[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    for (int i = 0; i < 3; i++)
    {
        if (!action_name.compare(array[i]))
            (this->*pointers[i])(target);
    }
}
