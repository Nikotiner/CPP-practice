#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &ob);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ob);
	void action() const;
};

#endif