#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	array[0] = "presidential pardon";
	array[1] = "robotomy request";
	array[2] = "shrubbery creation";
	pointers[0] = &Intern::getPrForm;
	pointers[1] = &Intern::getRobForm;
	pointers[2] = &Intern::getShForm;
}
Intern::~Intern()
{}
Intern::Intern(const Intern &ob)
{
	this->operator=(ob);
}
Intern &Intern::operator=(const Intern &ob)
{
	(void)ob;
	array[0] = "presidential pardon";
	array[1] = "robotomy request";
	array[2] = "shrubbery creation";
	pointers[0] = &Intern::getPrForm;
	pointers[1] = &Intern::getRobForm;
	pointers[2] = &Intern::getShForm;
	return (*this);
}
Form *Intern::makeForm(std::string name, std::string target) const
{
	for (size_t i = 0; i < 3; i++)
	{
		if (name == array[i])
			return((this->*pointers[i])(target));
	}	
	return (0);
}

Form *Intern::getPrForm(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::getRobForm(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::getShForm(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}