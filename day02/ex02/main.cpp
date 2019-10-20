#include "Fixed.hpp"

int main()
{
    Fixed a(3);
    Fixed c(3);
    Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
    std::cout << a * c << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    return (0);
}