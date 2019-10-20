#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy
{
private:
	int			hp;
	std::string	type;
public:
	Enemy();
	Enemy(const Enemy &en);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy &operator=(const Enemy &en);
	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int);
};

#endif