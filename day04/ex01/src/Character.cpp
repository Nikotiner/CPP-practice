#include "Character.hpp"

Character::Character(){}
Character::Character(std::string const & name) :name(name), ap(40), wp(nullptr)
{}
Character::Character(const Character &en) : name(en.name), ap(en.ap), wp(en.wp)
{

}
Character::~Character()
{

}
Character &Character::operator=(const Character &en)
{
	this->name = en.name;
	this->ap = en.ap;
	this->wp = en.wp;
	return (*this);
}
void Character::recoverAP()
{
	this->ap = (this->ap + 10 > 40) ? 40 : this->ap + 10;
}
void Character::equip(AWeapon *wp)
{
	this->wp = wp;
}
void Character::attack(Enemy* en)
{
	if (!this->wp)
	{
		std::cout << "No weapon!" << std::endl;
		return ;
	}

	if (!en)
	{
		std::cout << "Nobody to kill" << std::endl;
		return ;
	}
	if (this->ap > this->wp->getAPCost())
	{
		this->ap -= this->wp->getAPCost();
		std::cout << this->name << " attacks " << en->getType() << " whith a "<< this->wp->getName() << std::endl;
		wp->attack();
		en->takeDamage(this->wp->getDamage());
		if (en->getHP() <= 0)
			delete (en);
	}
	else
		std::cout << "No enough AP" << std::endl;
}
int 		Character::getAp() const{return (this->ap);}
AWeapon		*Character::getWeapon() const{return (this->wp);}
std::string Character::getName() const{return (this->name);}

std::ostream &operator<<(std::ostream &o, const Character &ch)
{
	if (ch.getWeapon())
		o << ch.getName() << " has " << ch.getAp() << " AP and wields a " << ch.getWeapon()->getName() << std::endl;
	else
		o << ch.getName() << " has " << ch.getAp() << " AP and is unarmed" << std::endl;
	return (o);
}