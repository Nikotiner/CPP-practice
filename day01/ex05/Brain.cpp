#include "Brain.hpp"

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

std::string    Brain::identify() const
{
    std::stringstream ss;
    std::string str;

    ss << this;
    ss >> str;
    return (str);
}