#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure();
	Cure(const Cure &sq);
	~Cure();
	Cure &operator=(const Cure &cp);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif