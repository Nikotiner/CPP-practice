#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string	name;
	int			ap;
	AWeapon 	*wp;
public:
	Character();
	Character(std::string const & name);
	Character(const Character &en);
	~Character();
	Character &operator=(const Character &en);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int 		getAp() const;
	AWeapon 	*getWeapon() const;
};

std::ostream &operator<<(std::ostream &o, const Character &ch);

#endif