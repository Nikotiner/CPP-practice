#ifndef ACHARACTER_HPP
# define ACHARACTER_HPP
# include "IGameObj.hpp"
# include "Bullet.hpp"

class ACharacter : public IGameObj
{
protected:
	std::string type;
	int hp;
	int x;
	int y;
public:
	ACharacter();
	ACharacter(int hp, int x, int y);
	ACharacter(const ACharacter &ch);
	~ACharacter();
	ACharacter &operator=(const ACharacter &ch);
	void shoot(Bullet **bullets) const;
	void takeDamage(int);
	void move(int);
	int		getHP() const;
	int		getX() const;
	int		getY() const;
};

#endif