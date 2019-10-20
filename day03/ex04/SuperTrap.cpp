#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->health = 100;
	this->maxHealth = 100;
	this->energy = 120;
	this->maxEnergy = 120;
	this->level = 1;
	this->name = "Anonymous";
	this->meleeDamage = 60;
	this->rangeDamage = 20;
	this->armorReduction = 5;
	std::cout << "SUPER_TP born with dick" << std::endl;
}
SuperTrap::SuperTrap(std::string name)
{
	this->health = 100;
	this->maxHealth = 100;
	this->energy = 120;
	this->maxEnergy = 120;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 60;
	this->rangeDamage = 20;
	this->armorReduction = 5;
	std::cout << "SUPER_TP born with dick and name " <<  this->name << std::endl;
}
SuperTrap::SuperTrap(const SuperTrap  &fr)
{
	this->name = fr.health;
	this->maxHealth = fr.maxHealth;
	this->energy = fr.energy;
	this->maxEnergy = fr.maxEnergy;
	this->level = fr.level;
	this->name = fr.name;
	this->meleeDamage = fr.meleeDamage;
	this->rangeDamage = fr.rangeDamage;
	this->armorReduction = fr.armorReduction;
}
SuperTrap::~SuperTrap()
{
	std::cout << "SUPER_TP die but his dick are left" << std::endl;
}
SuperTrap &SuperTrap::operator=(const SuperTrap &fr)
{
	this->name = fr.health;
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

void	SuperTrap::rangedAttack(std::string const & target)
{
	return (FragTrap::rangedAttack(target));
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	return (NinjaTrap::meleeAttack(target));
}

void	SuperTrap::takeDamage(unsigned int amount)
{
	int leftDamage = amount - this->armorReduction;

	if (leftDamage > 0)
		this->health = (this->health - leftDamage > 0) ? (this->health - leftDamage) : 0;
	std::cout << "SUPER_TP " << this->name << " take "<< amount <<" points of damage! Points left " << this->health <<std::endl;
}

void	SuperTrap::beRepaired(unsigned int amount)
{
	this->health = ((int)(this->health + amount) < this->maxHealth) ? (this->health + amount) : this->maxHealth;
	std::cout << "SUPER_TP " << this->name << " repair "<< amount <<" hit points! Now " << this->health << " hit points" <<std::endl;
}
