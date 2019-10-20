#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}
Sorcerer::Sorcerer(std::string name, std::string title) :name(name) , title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}
Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}
Sorcerer::Sorcerer(const Sorcerer &sor)
{
	this->name = sor.name;
	this->title = sor.title;
}
Sorcerer &Sorcerer::operator=(const Sorcerer &sor)
{
	this->name = sor.name;
	this->title = sor.title;
	return (*this);
}

std::string	Sorcerer::getName() const {return (this->name);}
std::string	Sorcerer::getTitle()const {return (this->title);}
void 		Sorcerer::polymorph(Victim const &vic){vic.getPolymorphed();}

std::ostream& operator<<(std::ostream& o, Sorcerer const &sor)
{
	o << "I am " << sor.getName() << ", " << sor.getTitle() <<", and I like ponies !" << std::endl;
	return (o);
}
