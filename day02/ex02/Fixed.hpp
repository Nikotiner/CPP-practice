#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 num;
        static const int    bits = 8;
    public:
                    Fixed();
                    ~Fixed();
                    Fixed(const Fixed &f);
                    Fixed(const int point);
                    Fixed(const float fl);
        Fixed       &operator = (const Fixed &f);
        bool        operator > (const Fixed &f);
        bool        operator < (const Fixed &f);
        bool        operator <= (const Fixed &f);
        bool        operator >= (const Fixed &f);
        bool        operator == (const Fixed &f);
        bool        operator != (const Fixed &f);
        Fixed       operator + (const Fixed &f);
        Fixed       operator - (const Fixed &f);
        Fixed       operator * (const Fixed &f);
        Fixed       operator / (const Fixed &f);
        Fixed       operator -- ();
        Fixed       operator -- (int);
        Fixed       operator ++ ();
        Fixed       operator ++ (int);
        int         getRawBits() const;
        void        setRawBits( int const raw );
        float       toFloat( void ) const;
        int         toInt( void ) const;
static Fixed        &min(Fixed &n1, Fixed &n2){return (n1.getRawBits() <= n2.getRawBits() ? n1 : n2);}
static const Fixed  &min(const Fixed &n1, const Fixed &n2){return (n1.getRawBits() <= n2.getRawBits() ? n1 : n2);}
static Fixed        &max(Fixed &n1, Fixed &n2){return (n1.getRawBits() >= n2.getRawBits() ? n1 : n2);}
static const Fixed  &max(const Fixed &n1, const Fixed &n2) {return (n1.getRawBits() >= n2.getRawBits() ? n1 : n2);}
};

std::ostream        &operator<<(std::ostream & o, Fixed const &f);

#endif
