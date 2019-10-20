#include "Player.hpp"

Player::Player() : ACharacter(100, MAXFIELD_X/2, MAXFIELD_Y - 1)
{}
Player::Player(const Player &ob): ACharacter(ob)
{}
Player::~Player()
{}
Player &Player::operator=(const Player &ob)
{
	ACharacter::operator=(ob);
	return (*this);
}