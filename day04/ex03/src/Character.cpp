#include "Character.hpp"

Character::Character()
{
	this->materia[0] = 0;
	this->materia[1] = 0;
	this->materia[2] = 0;
	this->materia[3] = 0;
}
Character::Character(std::string name) : name(name)
{
	this->materia[0] = 0;
	this->materia[1] = 0;
	this->materia[2] = 0;
	this->materia[3] = 0;
}
Character::Character(const Character &cp)
{
	*this = cp;
}
Character &Character::operator=(const Character & ch)
{
	this->name = ch.name;
	this->materia[0] = ch.materia[0];
	this->materia[1] = ch.materia[0];
	this->materia[2] = ch.materia[0];
	this->materia[3] = ch.materia[0];
	return (*this);
}
Character::~Character()
{}
std::string const & Character::getName() const{return (this->name);}
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = m;
			break ; 
		}
	}
	
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->materia[idx])
		this->materia[idx] = 0;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->materia[idx])
		this->materia[idx]->use(target);
}

void Character::cleanMateria()
{
	if (this->materia[0])
		delete (this->materia[0]);
	if (this->materia[1])
		delete (this->materia[1]);
	if (this->materia[2])
		delete (this->materia[2]);
	if (this->materia[3])
		delete (this->materia[3]);
}