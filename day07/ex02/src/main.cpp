#include "Array.hpp"
void test()
{
	Array<int> em;
	Array<int> full(3);
	full[0] = 0;
	full[1] = 1;
	full[2] = 2;
	Array<int> test = full;
	test[0] = 3;
	try
	{
		std::cout<<em[0]<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout<<full[0]<<std::endl;
		std::cout<<full[1]<<std::endl;
		std::cout<<full[2]<<std::endl;
		std::cout<<full[3]<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout<<test[0]<<std::endl;
		std::cout<<test[1]<<std::endl;
		std::cout<<test[2]<<std::endl;
		std::cout<<full[0]<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
int main()
{
	test();
	system("leaks -q template");
	return (0);
}