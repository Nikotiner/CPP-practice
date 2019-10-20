#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream ifs;
    std::string    str;

    if (argc == 1)
    {
        while (getline(std::cin, str))
            std::cout << str << std::endl;
    }
    for(int i = 1; i < argc; i++)
    {
        ifs.open(argv[i]);
        if (ifs.is_open())
        {
            while (getline(ifs, str))
                std::cout << str << std::endl;
            
        }
        else
            std::cout << "No such file or directory" << std::endl;
        ifs.close();
    }
    return (0);
}
