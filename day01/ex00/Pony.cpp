#include "Pony.hpp"

Pony::Pony(std::string str)
{
    this->type = str;
    std::cout << "My little " << this->type << " Pony created" << std::endl;
}

Pony::Pony()
{
    this->type = "unknown";
    std::cout << "My little " << this->type << " Pony created" << std::endl;
}

Pony::~Pony()
{
    std::cout << "My little " << this->type << " Pony died" << std::endl;
}

void    Pony::eating()
{
    std::cout << "My little " << this->type << " Pony eating" << std::endl;
}