#ifndef CALPTRAP_HPP
# define CALPTRAP_HPP
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
	std::string	getName() const;
	ClapTrap &operator=(const ClapTrap &ClapTrap);
	
};

#endif