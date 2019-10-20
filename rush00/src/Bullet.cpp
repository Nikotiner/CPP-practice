#include "Bullet.hpp"

Bullet::Bullet() : x(0), y(0)
{}
Bullet::Bullet(int x, int y) : x(x), y(y)
{}
Bullet::Bullet(const Bullet &ch)
{
	*this = ch;
}
Bullet::~Bullet()
{}
Bullet &Bullet::operator=(const Bullet &ch)
{
	this->x = ch.x;
	this->y = ch.y;
	return (*this);
}

void Bullet::move(int)
{
	this->y = (this->y - 1 < 0) ? 0 : --this->y;
}

int Bullet::getX() const{return (this->x);}
int Bullet::getY() const{return (this->y);}