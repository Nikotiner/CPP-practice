#include <iostream>
template<typename T>
void testedFunc(const T &var){
	std::cout<<var<<std::endl;
}

template<typename T>
void	iter(T *address, size_t len, void (*foo)(const T&))
{
	for (size_t i = 0; i < len; i++)
	{
		foo(address[i]);
	}
}


int main()
{
	
	int array[] = {1, 2, 3, 4, 5};
	std::string str[] = {"str1", "str2", "str3"};
	iter(str, 3, testedFunc);
	iter(array, 5, testedFunc);
	return (0);
}