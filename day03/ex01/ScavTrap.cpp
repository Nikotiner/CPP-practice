#include "ScavTrap.hpp"

ScavTrap &ScavTrap::operator=(const ScavTrap &fr)
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

ScavTrap::ScavTrap() : health(100), maxHealth(100), energy(50), maxEnergy(50),
level(1), name("Anonymus"), meleeDamage(20), rangeDamage(15), armorReduction(3)
{
	std::cout << "SCAV-TP: Call me " << this->name  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap  &fr)
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

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP: Some thing going wrong!" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : health(100), maxHealth(100), energy(50), maxEnergy(50),
level(1), name(name), meleeDamage(20), rangeDamage(15), armorReduction(3)
{
	std::cout << "SCAV-TP: Call me " << this->name  << std::endl;
}


void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5] = {"Who better evaluated me", "Who faster give a left nearbour pepsi", "Who give me five", "Who faster find student with dlian login", "Who faster kill *FragTrap*"};
	std::cout << "SCAV-TP call " << target << " to challenge \"" <<challenges[rand() % 5] << "\"" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAV-TP " << this->name << " attacks "<< target <<" at range, causing " << this->rangeDamage << " points of damage!" << std::endl;
}
void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAV-TP " << this->name << " attacks "<< target <<" at melee, causing " << this->meleeDamage << " points of damage!" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	int leftDamage = amount - this->armorReduction;

	if (leftDamage > 0)
		this->health = (this->health - leftDamage > 0) ? (this->health - leftDamage) : 0;
	std::cout << "SCAV-TP " << this->name << " take "<< amount <<" points of damage! Points left " << this->health <<std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->health = ((int)(this->health + amount) < this->maxHealth) ? (this->health + amount) : this->maxHealth;
	std::cout << "SCAV-TP " << this->name << " repair "<< amount <<" hit points! Now " << this->health << " hit points" <<std::endl;
}