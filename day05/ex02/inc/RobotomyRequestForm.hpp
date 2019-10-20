#ifndef	ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &ob);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &ob);
	void action() const;
};

#endif