#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{}
Ice::Ice(const Ice &sq)
{
	*this = sq;
}
Ice::~Ice()
{}
Ice &Ice::operator=(const Ice &cp)
{
	(void) cp;
	return (*this);
}
AMateria* Ice::clone() const
{
	return (new Ice());
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}