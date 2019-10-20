#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int num;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        Fixed	&operator = (const Fixed &f);
        int     getRawBits() const;
        void    setRawBits( int const raw );
};

#endif