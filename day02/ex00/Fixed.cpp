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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void    Fixed::setRawBits( int const raw )
{
	this->num = raw;
}
