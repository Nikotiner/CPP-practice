#ifndef BULLET_HPP
# define BULLET_HPP
# include "IGameObj.hpp"

class Bullet : public IGameObj
{
protected:
	int x;
	int y;
public:
	Bullet();
	Bullet(int x, int y);
	Bullet(const Bullet &ch);
	~Bullet();
	Bullet &operator=(const Bullet &ch);
	void move(int);
	int getX() const;
	int getY() const;
};

#endif