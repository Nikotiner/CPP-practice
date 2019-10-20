#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), target("")
{}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ob) :  Form("RobotomyRequestForm", 72, 45), target(ob.target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ob)
{
	this->target = ob.target;
	return (*this);
}
void RobotomyRequestForm::action() const
{
	std::cout << "Some drilling... noise. " << target <<  " 50% has been robotomized successfully other 50% failed" << std::endl;
}