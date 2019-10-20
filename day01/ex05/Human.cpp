#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string    Human::identify() const
{
   return (this->br.identify());
}

const Brain    &Human::getBrain() const
{
    return (this->br);
}