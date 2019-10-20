#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string 	name;
	std::string 	title;
public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	~Sorcerer();
	Sorcerer(const Sorcerer &sor);
	Sorcerer &operator=(const Sorcerer &sor);
	std::string	getName() const;
	std::string	getTitle() const;
	void 		polymorph(Victim const &);
};

std::ostream& operator<<(std::ostream& o, Sorcerer const &sor);

#endif
