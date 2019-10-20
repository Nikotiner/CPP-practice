#include "Bug.hpp"

Bug::Bug() : ACharacter(0, 0, 0)
{}
Bug::Bug(int x, int y) : ACharacter(10, x , y)
{}
Bug::Bug(const Bug &ob) : ACharacter(ob)
{}
Bug::~Bug()
{}
Bug &Bug::operator=(const Bug &ob)
{
	ACharacter::operator=(ob);
	return(*this);
}