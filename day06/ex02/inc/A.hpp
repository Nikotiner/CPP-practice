#ifndef A_HPP
# define A_HPP
#include "Base.hpp"

class A : public Base
{
	private:
	public:
		A();
		~A();
		A(const A &ob);
		A &operator=(const A &ob);
};

#endif