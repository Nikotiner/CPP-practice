#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat br("Bureaucrat", 50);
    Form form("Visa", 49, 150);
    PresidentialPardonForm prForm("likeit");
    RobotomyRequestForm robForm("likeit");
    ShrubberyCreationForm shForm("likeit");
    br.signForm(form);
    br.signForm(prForm);
    br.signForm(robForm);
    br.signForm(shForm);
    br.executeForm(form);
    br.executeForm(prForm);
    br.executeForm(robForm);
    br.executeForm(shForm);
    // std::cout << form << std::endl;
    return 0;
}