#include <iostream>
#include <limits.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	try
	{
		double db = std::stod(argv[1]);
		char ch = db;
		if (ch >= 32 && ch <= 126)
			std::cout<< "char: "<< ch <<std::endl;
		else
			std::cout<< "char: "<< "Non displayable" <<std::endl;
		int num = db;
		if (db <= INT_MAX && db >= INT_MIN)
			std::cout<< "int: "<< num <<std::endl;
		else
			std::cout<< "int: impossible" <<std::endl;
		std::cout <<"float: "<< static_cast<float>(db) << ((db - num) ? "f":".0f") <<std::endl;
		std::cout <<"double: "<< db << ((db - num) ? "":".0") << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout <<"float: nanf" <<std::endl;
		std::cout <<"double: nan" <<std::endl;
	}
    return 0;
}