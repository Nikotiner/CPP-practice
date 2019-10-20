#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion();
	RadScorpion(const RadScorpion &en);
	~RadScorpion();
	RadScorpion &operator=(const RadScorpion &en);
};

#endif