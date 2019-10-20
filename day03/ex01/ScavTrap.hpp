#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap  &fr);
	~ScavTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
	ScavTrap &operator=(const ScavTrap &trap);
	
};

#endif