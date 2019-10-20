#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
	int 		health;
	int 		maxHealth;
	int 		energy;
	int 		maxEnergy;
	int 		level;
	std::string	name;
	int 		meleeDamage;
	int 		rangeDamage;
	int 		armorReduction;

public:
	ClapTrap();
	ClapTrap(const ClapTrap  &fr);
	~ClapTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	ClapTrap &operator=(const ClapTrap &ClapTrap);
	
};

#endif