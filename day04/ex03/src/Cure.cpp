#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{}
Cure::Cure(const Cure &sq)
{
	*this = sq;
}
Cure::~Cure()
{}
Cure &Cure::operator=(const Cure &cp)
{
	(void) cp;
	return (*this);
}
AMateria* Cure::clone() const
{
	return (new Cure());
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds * " << std::endl;
}