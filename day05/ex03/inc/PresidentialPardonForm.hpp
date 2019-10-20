#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &ob);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &ob);
	void action() const;
};

#endif