#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), damage(damage), ap(apcost)
{
}
AWeapon::AWeapon(const AWeapon &wp) : name(wp.name), damage(wp.damage), ap(wp.ap)
{
}

AWeapon::~AWeapon()
{
}

AWeapon &AWeapon::operator=(const AWeapon &wp)
{
	this->name = wp.name;
	this->damage = wp.damage;
	this->ap = wp.ap;
	return (*this);
}

std::string AWeapon::getName() const{return (this->name);}
int			AWeapon::getAPCost() const{return (this->ap);}
int			AWeapon::getDamage() const{return (this->damage);}