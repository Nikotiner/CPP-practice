#include <iostream>
#include <header.hpp>

void * serialize( void )
{
	char *random = new char[24];
	for (int i = 0; i < 8; i++)
	{
		int j = rand() % 3;
		if (j == 0)
			random[i] = 48 + rand() % (57 - 48);
		else if (j == 1)
			random[i] = 65 + rand() % (90 - 65);
		else
			random[i] = 97 + rand() % (122 - 97);
		
	}
	*reinterpret_cast<int *>(&random[8]) = rand() % 99999;
	for (int i = 16; i < 24; i++)
	{
		int j = rand() % 3;
		if (j == 0)
			random[i] = 48 + rand() % (57 - 48);
		else if (j == 1)
			random[i] = 65 + rand() % (90 - 65);
		else
			random[i] = 97 + rand() % (122 - 97);
	}
	return (random);
}

Data * deserialize( void * raw )
{
	Data *d = new Data();
	
	char * str = reinterpret_cast<char *>(raw);

	for (int i = 0; i < 8; i++)
	{
		d->s1 += str[i];
	}
	d->n = *reinterpret_cast<int *>(str + 8);
	str = reinterpret_cast<char *>(str + 16);
	for (int i = 0; i < 8; i++)
	{
		d->s2 += str[i];
	}
	delete reinterpret_cast<char *>(raw);
	return (d);
}

int main()
{
	std::cout << "==========================================="<<std::endl;
	Data *d = deserialize(serialize());
	std::cout << "str1: " << d->s1 << std::endl;
	std::cout << "num: " << d->n << std::endl;
	std::cout << "str2: " << d->s2 << std::endl;
	std::cout << "==========================================="<<std::endl;
	Data *d2 = deserialize(serialize());
	std::cout << "str1: " << d2->s1 << std::endl;
	std::cout << "num: " << d2->n << std::endl;
	std::cout << "str2: " << d2->s2 << std::endl;
	std::cout << "==========================================="<<std::endl;
	Data *d3 = deserialize(serialize());
	std::cout << "str1: " << d3->s1 << std::endl;
	std::cout << "num: " << d3->n << std::endl;
	std::cout << "str2: " << d3->s2 << std::endl;
	std::cout << "==========================================="<<std::endl;
	Data *d4 = deserialize(serialize());
	std::cout << "str1: " << d4->s1 << std::endl;
	std::cout << "num: " << d4->n << std::endl;
	std::cout << "str2: " << d4->s2 << std::endl;
	std::cout << "==========================================="<<std::endl;
	Data *d5 = deserialize(serialize());
	std::cout << "str1: " << d5->s1 << std::endl;
	std::cout << "num: " << d5->n << std::endl;
	std::cout << "str2: " << d5->s2 << std::endl;
	std::cout << "==========================================="<<std::endl;
	system("leaks -q convert");
	return (0);
}