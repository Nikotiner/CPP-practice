#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	
public:
	PowerFist();
	PowerFist(const PowerFist &rifle);
	PowerFist &operator=(const PowerFist &rifle);
	~PowerFist();
	void attack() const;	
};

#endif
