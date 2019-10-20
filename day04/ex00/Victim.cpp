#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : name(name)
{
	std::cout<<"Some random victim called "<< name <<" just popped !"<<std::endl;
}

Victim::~Victim()
{
	std::cout<<"Victim "<< name <<"  just died for no apparent reason !"<<std::endl;
}

Victim::Victim(const Victim &vic)
{
	this->name = vic.name;
}

Victim &Victim::operator=(const Victim &vic)
{
	this->name = vic.name;
	return (*this);
}

std::string Victim::getName() const {return (this->name);}
void 		Victim::setName(std::string name) {this->name = name;}

void Victim::getPolymorphed() const
{
	std::cout<< this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Victim const &vic)
{
	o<<"I'm "<<vic.getName() << " and I like otters !"  << std::endl;
	return (o);
}