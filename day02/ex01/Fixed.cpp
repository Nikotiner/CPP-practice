#include "Fixed.hpp"

Fixed::Fixed() : num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(f);
}

Fixed::Fixed(const int point) : num(point* (1 << this->bits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fl)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(fl * (1 << this->bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
	this->num = f.getRawBits();
    return (*this);
}

int		Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
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