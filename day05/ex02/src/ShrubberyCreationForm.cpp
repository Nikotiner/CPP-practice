#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("target")
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ob) :  Form("ShrubberyCreationForm", 145, 137), target(ob.target)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ob)
{
	this->target = ob.target;
	return (*this);
}
void ShrubberyCreationForm::action() const
{
	std::ofstream str(target);
	
	str << "              v .   ._, |_  .,"<<std::endl;
str <<"           `-._\\/  .  \\ /    |/_"<<std::endl;
str <<"               \\  _\\, y | \\//"<<std::endl;
str <<"         _\\_.___\\, \\/ -.\\||"<<std::endl;
str <<"           `7-,--.`._||  / / ,"<<std::endl;
str <<"           /'     `-. `./ / |/_.'"<<std::endl;
str <<"                     |    |//"<<std::endl;
str <<"                     |_    /"<<std::endl;
str <<"                     |-   |"<<std::endl;
str <<"                     |   =|"<<std::endl;
str <<"                     |    |"<<std::endl;
str <<"--------------------/ ,  . \\--------._"<<std::endl;
str.close();
}