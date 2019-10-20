#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant();
	SuperMutant(const SuperMutant &en);
	~SuperMutant();
	SuperMutant &operator=(const SuperMutant &en);
	void		takeDamage(int);
};

#endif