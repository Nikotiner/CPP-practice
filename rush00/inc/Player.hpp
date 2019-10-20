#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "ACharacter.hpp"

class Player : public ACharacter
{
private:
public:
	Player();
	Player(const Player &ob);
	~Player();
	Player &operator=(const Player &ob);
};

#endif