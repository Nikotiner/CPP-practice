#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
	void 	left_virgin(const	ClapTrap &clap) const;
	void 	dirty(const	ClapTrap &clap) const;
	void 	to_space(const	ClapTrap &clap) const;
	void	(NinjaTrap::*pointers[5])(const	ClapTrap &clap) const;
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap  &fr);
	~NinjaTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void 	ninjaShoebox(const	ClapTrap &clap) const;
	NinjaTrap &operator=(const NinjaTrap &trap);
	
};

#endif