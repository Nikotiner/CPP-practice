#include "NinjaTrap.hpp"

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &fr)
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

NinjaTrap::NinjaTrap()
{
	this->health = 60;
	this->maxHealth = 60;
	this->energy = 120;
	this->maxEnergy = 120;
	this->level = 1;
	this->name = "Anonymus";
	this->meleeDamage = 60;
	this->rangeDamage = 5;
	this->armorReduction = 0;
	this->pointers[0] = &NinjaTrap::to_space;
	this->pointers[1] = &NinjaTrap::dirty;
	this->pointers[2] = &NinjaTrap::left_virgin;
	std::cout << "NINJ4-TP creates like a casper with name \"" << this->name << "\"" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap  &fr)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJ4-TP sipoka!" << std::endl;
}


NinjaTrap::NinjaTrap(std::string name)
{
	this->health = 60;
	this->maxHealth = 60;
	this->energy = 120;
	this->maxEnergy = 120;
	this->level = 1;
	this->name = name;
	this->meleeDamage = 60;
	this->rangeDamage = 5;
	this->armorReduction = 0;
	this->pointers[0] = &NinjaTrap::to_space;
	this->pointers[1] = &NinjaTrap::dirty;
	this->pointers[2] = &NinjaTrap::left_virgin;
	std::cout << "NINJ4-TP creates like a casper with name \"" << this->name << "\"" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->name << " attacks "<< target <<" at range, causing " << this->rangeDamage << " points of damage!" << std::endl;
}
void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->name << " attacks "<< target <<" at melee, causing " << this->meleeDamage << " points of damage!" << std::endl;
}
void	NinjaTrap::takeDamage(unsigned int amount)
{
	int leftDamage = amount - this->armorReduction;

	if (leftDamage > 0)
		this->health = (this->health - leftDamage > 0) ? (this->health - leftDamage) : 0;
	std::cout << "NINJ4-TP " << this->name << " take "<< amount <<" points of damage! Points left " << this->health <<std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	this->health = ((int)(this->health + amount) < this->maxHealth) ? (this->health + amount) : this->maxHealth;
	std::cout << "NINJ4-TP " << this->name << " repair "<< amount <<" hit points! Now " << this->health << " hit points" <<std::endl;
}

void 	NinjaTrap::left_virgin(const ClapTrap &clap) const
{
	std::cout << "NINJ4-TP " << this->name << " left virgin " << clap.getName() << std::endl;
}
void 	NinjaTrap::dirty(const	ClapTrap &clap) const
{
	std::cout << "NINJ4-TP " << this->name << " did some dirty manipulation with " << clap.getName() << std::endl;
}
void 	NinjaTrap::to_space(const	ClapTrap &clap) const
{
	std::cout << "NINJ4-TP " << this->name << " send " << clap.getName() << " to space with Tesla" << std::endl;
}
void 	NinjaTrap::ninjaShoebox(const	ClapTrap &clap) const
{
	(this->*pointers[rand() % 3])(clap);
}