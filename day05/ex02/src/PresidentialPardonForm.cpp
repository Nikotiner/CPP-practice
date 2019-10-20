#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), target("")
{}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ob) :  Form("PresidentialPardonForm", 25, 5), target(ob.target)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ob)
{
	this->target = ob.target;
	return (*this);
}
void PresidentialPardonForm::action() const
{
	std::cout << this->target <<  " has been pardoned by Zaphod Beeblebrox" << std::endl;
}