#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

// class ICharacter;

class AMateria
{
private:
	std::string		type;
	unsigned int 	xp_;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &sq);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &cp);
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
