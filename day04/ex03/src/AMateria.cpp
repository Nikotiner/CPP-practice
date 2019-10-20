#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("?"), xp_(0)
{}
AMateria::AMateria(std::string const & type) : type(type), xp_(0)
{}
AMateria::AMateria(const AMateria &sq)
{
	*this = sq;
}
AMateria::~AMateria()
{}
AMateria &AMateria::operator=(const AMateria &cp)
{
	this->type = cp.type;
	this->xp_ = cp.xp_;
	return (*this);
}

std::string const & AMateria::getType() const{return (this->type);}
unsigned int AMateria::getXP() const{return (this->xp_);}
void AMateria::use(ICharacter& target)
{
	this->xp_ += 10;
	std::cout << "Bada bum to " << target.getName() << std::endl;
}