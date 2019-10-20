#ifndef BUG_HPP
# define BUG_HPP
# include "ACharacter.hpp"

class Bug : public ACharacter
{
private:
public:
	Bug();
	Bug(const Bug &ob);
	Bug(int x, int y);
	~Bug();
	Bug &operator=(const Bug &ob);
};

#endif