#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(const Enemy &en) : hp(en.hp), type(en.type)
{
}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(const Enemy &en)
{
	this->hp = en.hp;
	this->type = en.type;
	return (*this);
}

std::string		Enemy::getType() const {return (this->type);}
int				Enemy::getHP() const {return (this->hp);}
void			Enemy::takeDamage(int dm)
{
	this->hp = (this->hp - dm < 0) ? 0 : this->hp - dm;
}