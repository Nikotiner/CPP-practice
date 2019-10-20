#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
private:
public:
	Peon();
	Peon(std::string name);
	~Peon();
	Peon(const Peon &peon);
	Peon &operator=(const Peon &peon);
	void	getPolymorphed() const;
};

#endif