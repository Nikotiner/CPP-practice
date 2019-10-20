#include "Fixed.hpp"

Fixed::Fixed() : num(0)
{
}

Fixed::Fixed(const Fixed &f)
{
	this->operator=(f);
}

Fixed::Fixed(const int point) : num(point* (1 << this->bits))
{
}

Fixed::Fixed(const float fl)
{
	this->num = roundf(fl * (1 << this->bits));
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator = (const Fixed &f)
{
	this->num = f.getRawBits();
    return (*this);
}

int		Fixed::getRawBits() const
{
	return (this->num);
}

void    Fixed::setRawBits( int const raw )
{
	this->num = raw;
}

float   Fixed::toFloat( void ) const
{
	return ((float)this->num / (1 << this->bits));
}

int     Fixed::toInt( void ) const
{
	return (this->num >> this->bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}

bool    Fixed::operator > (const Fixed &f) {return(this->num > f.num);}
bool    Fixed::operator < (const Fixed &f){return(this->num < f.num);}
bool    Fixed::operator <= (const Fixed &f){return(this->num <= f.num);}
bool    Fixed::operator >= (const Fixed &f){return(this->num >= f.num);}
bool    Fixed::operator == (const Fixed &f){return(this->num == f.num);}
bool    Fixed::operator != (const Fixed &f){return(this->num != f.num);}
Fixed   Fixed::operator + (const Fixed &f){return (Fixed(this->toFloat() + f.toFloat()));}
Fixed   Fixed::operator - (const Fixed &f){return (Fixed(this->toFloat() - f.toFloat()));}
Fixed   Fixed::operator * (const Fixed &f){return (Fixed(this->toFloat() * f.toFloat()));}
Fixed   Fixed::operator / (const Fixed &f){return (Fixed(this->toFloat() / f.toFloat()));}
Fixed   Fixed::operator -- ()
{
	Fixed fix;
	fix.num = --this->num;
	return(fix);
}
Fixed   Fixed::operator -- (int)
{
	Fixed fix;
	fix.num = this->num--;
	return(fix);
}
Fixed   Fixed::operator ++ ()
{
	Fixed fix;
	fix.num = ++this->num;
	return(fix);
}
Fixed   Fixed::operator ++ (int)
{
	Fixed fix;
	fix.num = this->num++;
	return(fix);
}
