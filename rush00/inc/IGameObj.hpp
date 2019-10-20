#ifndef IGAMEOBJ_HPP
# define IGAMEOBJ_HPP
# include "game.hpp"
class IGameObj
{
private:
public:
	virtual ~IGameObj(){};
	virtual void move(int) = 0;
};

#endif