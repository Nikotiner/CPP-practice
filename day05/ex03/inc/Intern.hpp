#ifndef	INTERN_HPP
# define INTERN_HPP
#include "Form.hpp"

class Intern
{
private:
	std::string array[3];
	Form *(Intern::* pointers[3])(std::string target) const;
public:
	Intern();
	~Intern();
	Intern(const Intern &ob);
	Intern &operator=(const Intern &ob);
	Form *makeForm(std::string name, std::string target) const;
	Form *getPrForm(std::string target) const;
	Form *getRobForm(std::string target) const;
	Form *getShForm(std::string target) const;
};

#endif