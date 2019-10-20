#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
	std::string type;
	std::string	name;
public:
	Zombie();
	Zombie(std::string n, std::string t);
	Zombie(std::string n);
	~Zombie();
	void announce();
};

#endif