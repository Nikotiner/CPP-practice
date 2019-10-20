#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &rifle);
	PlasmaRifle &operator=(const PlasmaRifle &rifle);
	~PlasmaRifle();
	void attack() const;	
};
#endif
