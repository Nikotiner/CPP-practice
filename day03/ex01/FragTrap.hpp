#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap
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
	void	(FragTrap::*pointers[5])(std::string const & target);
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap  &fr);
	~FragTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	kickAss(std::string const & target);
	void	flowerBoom(std::string const & target);
	void	kamikadze(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	FragTrap &operator=(const FragTrap &trap);
	
};

#endif