#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pt = &str;
    std::string &ref = str;

    std::cout << "pointer: " << *pt << std::endl;
    std::cout << "reference: " << ref << std::endl;
    return (0);
}