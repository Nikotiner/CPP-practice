#include "FragTrap.hpp"

FragTrap &FragTrap::operator=(const FragTrap &fr)
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

FragTrap::FragTrap(): health(100), maxHealth(100), energy(100), maxEnergy(100),
level(1), name("Anonymus"), meleeDamage(30), rangeDamage(20), armorReduction(5)
{
	this->pointers[0] = &FragTrap::meleeAttack;
	this->pointers[1] = &FragTrap::rangedAttack;
	this->pointers[2] = &FragTrap::flowerBoom;
	this->pointers[3] = &FragTrap::kickAss;
	this->pointers[4] = &FragTrap::kamikadze;
	std::cout << "FR4G-TP created with stupid name \"" << this->name << "\" -(" << std::endl;
}

FragTrap::FragTrap(const FragTrap  &fr)
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

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP was so young!" << std::endl;
}


FragTrap::FragTrap(std::string name) : health(100), maxHealth(100), energy(100), maxEnergy(100),
level(1), name(name), meleeDamage(30), rangeDamage(20), armorReduction(5)
{
	this->pointers[0] = &FragTrap::meleeAttack;
	this->pointers[1] = &FragTrap::rangedAttack;
	this->pointers[2] = &FragTrap::flowerBoom;
	this->pointers[3] = &FragTrap::kickAss;
	this->pointers[4] = &FragTrap::kamikadze;
	std::cout << "FR4G-TP created with stupid name \"" << this->name << "\" -(" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks "<< target <<" at range, causing " << this->rangeDamage << " points of damage!" << std::endl;
}
void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks "<< target <<" at melee, causing " << this->meleeDamage << " points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	int leftDamage = amount - this->armorReduction;

	if (leftDamage > 0)
		this->health = (this->health - leftDamage > 0) ? (this->health - leftDamage) : 0;
	std::cout << "FR4G-TP " << this->name << " take "<< amount <<" points of damage! Points left " << this->health <<std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->health = ((int)(this->health + amount) < this->maxHealth) ? (this->health + amount) : this->maxHealth;
	std::cout << "FR4G-TP " << this->name << " repair "<< amount <<" hit points! Now " << this->health << " hit points" <<std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->energy >= 25)
	{
		(this->*pointers[rand() % 5])(target);
		this->energy -= 25;
	}
	else
		std::cout << "FR4G-TP : Not enough energy" <<std::endl;
}

void	FragTrap::kickAss(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " kick ass attack at "<< target <<", without damage!" << std::endl;
}
void	FragTrap::flowerBoom(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " flower boom attacks at "<< target <<" healing him to full HP or not..." << std::endl;
}
void	FragTrap::kamikadze(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " kamikadze attacks "<< target <<" our Earth was destroyed!" << std::endl;
}