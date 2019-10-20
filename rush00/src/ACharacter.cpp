#include "ACharacter.hpp"
#include "Bullet.hpp"

ACharacter::ACharacter() : hp(100), x (0), y(0)
{}
ACharacter::ACharacter(int hp, int x, int y) : hp(hp), x(x), y(y)
{}
ACharacter::ACharacter(const ACharacter &ch)
{
	*this = ch;
}
ACharacter::~ACharacter()
{}
ACharacter &ACharacter::operator=(const ACharacter &ch)
{
	this->hp = ch.hp;
	this->x = ch.x;
	this->y = ch.y;
	return (*this);
}
void ACharacter::shoot(Bullet **bullets) const
{
	int i;
	int count;
	
	i = -1;
	count = 0;
	while(++i < BULL_ARRAY)
	{
		if (!bullets[i] && count == 0)
		{
			bullets[i] = new Bullet(this->x + 1, this->y - 1);
			count++;
		}
		else if (!bullets[i] && count == 1)
		{
			bullets[i] = new Bullet(this->x + 2, this->y - 1);
			break ;
		}

	}
}
void ACharacter::takeDamage(int hit)
{
	this->hp = (this->hp - hit < 0) ? 0 : this->hp - hit;
}

/* 1 = up, 2 = right, 3 = left, 4 = down  5 = downLeft 6 = downRight*/
void ACharacter::move(int vector)
{
	switch (vector)
	{
		case 1:
			this->y = (this->y - STEP < 0) ? 0 : this->y - STEP;
			break;
		case 2:
			this->x = (this->x + STEP > MAXFIELD_X) ? MAXFIELD_X : this->x + STEP;
			break;
		case 3:
			this->x = (this->x - STEP < 0) ? 0 : this->x - STEP;
			break;
		case 4:
			this->y = (this->y + STEP > MAXFIELD_Y) ? MAXFIELD_Y : this->y + STEP;
			break;
		case 5:
			if (this->y + STEP <= MAXFIELD_Y && this->x - STEP >= 0){
				this->y = this->y + STEP;
				this->x = this->x - STEP;
			}
			break;
		case 6:
			if(this->y + STEP <= MAXFIELD_Y && this->x + STEP <= MAXFIELD_X)
			{
				this->y = this->y + STEP;
				this->x = this->x + STEP;
			}
			break;	
	}
}
int		ACharacter::getHP() const {return (this->hp);}
int		ACharacter::getX() const{return (this->x);}
int		ACharacter::getY() const{return (this->y);}