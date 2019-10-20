#ifndef B_HPP
# define B_HPP
#include "Base.hpp"

class B : public Base
{
	private:
	public:
		B();
		~B();
		B(const B &ob);
		B &operator=(const B &ob);
};

#endif