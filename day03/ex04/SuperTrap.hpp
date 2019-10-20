#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap
{
private:
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap  &fr);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap &trap);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif