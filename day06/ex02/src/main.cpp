#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int r = rand()%3;
	if (r == 0)
	{
		std::cout << "Should be A"<<std::endl;
		return (new A());
	}
	else if (r == 1)
	{
		std::cout << "Should be B"<<std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Should be C"<<std::endl;
		return (new C());
	}
}

void identify_from_pointer( Base * p )
{
	A *a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p )
{
	A *a = dynamic_cast<A*>(&p);
	if (a)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(&p);
	if (b)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C*>(&p);
	if (c)
		std::cout << "C" << std::endl;
}

int main()
{
	Base *a = generate();
	identify_from_pointer(a);
	identify_from_reference(*a);
	return (0);
}