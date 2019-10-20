#include "ClapTrap.hpp"

ClapTrap &ClapTrap::operator=(const ClapTrap &fr)
{
	this->health = fr.health;
	this->maxHealth = fr.maxHealth;
	this->energy = fr.energy;
	this->maxEnergy = fr.maxEnergy;
	this->level = fr.level;
	this->name = fr.name;
	this->meleeDamage = fr.meleeDamage;
	this->rangeDamage = fr.rangeDamage;
	this->armorReduction = fr.armorReduction;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap  &fr)
{
	this->health = fr.health;
	this->maxHealth = fr.maxHealth;
	this->energy = fr.energy;
	this->maxEnergy = fr.maxEnergy;
	this->level = fr.level;
	this->name = fr.name;
	this->meleeDamage = fr.meleeDamage;
	this->rangeDamage = fr.rangeDamage;
	this->armorReduction = fr.armorReduction;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P_TR: Mothership crashed!" << std::endl;
}


ClapTrap::ClapTrap()
{
	std::cout << "CL4P_TR: Mothership created!" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P_TR " << this->name << " attacks "<< target <<" at range, causing " << this->rangeDamage << " points of damage!" << std::endl;
}
void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P_TR " << this->name << " attacks "<< target <<" at melee, causing " << this->meleeDamage << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	int leftDamage = amount - this->armorReduction;

	if (leftDamage > 0)
		this->health = (this->health - leftDamage > 0) ? (this->health - leftDamage) : 0;
	std::cout << "CL4P_TR " << this->name << " take "<< amount <<" points of damage! Points left " << this->health <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->health = ((int)(this->health + amount) < this->maxHealth) ? (this->health + amount) : this->maxHealth;
	std::cout << "CL4P_TR " << this->name << " repair "<< amount <<" hit points! Now " << this->health << " hit points" <<std::endl;
}

std::string		ClapTrap::getName() const
{
	return(this->name);
}
