#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int num;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        Fixed(const int point);
        Fixed(const float fl);
        Fixed   &operator = (const Fixed &f);
        int     getRawBits() const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &f);

#endif