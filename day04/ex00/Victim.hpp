#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
private:
	std::string name;
public:
	Victim();
	Victim(std::string name);
	~Victim();
	Victim(const Victim &vic);
	Victim &operator=(const Victim &vic);
	std::string getName() const;
	void 		setName(std::string name);
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &vic);

#endif