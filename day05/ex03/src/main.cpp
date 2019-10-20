#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat br("Bureaucrat", 1);
    Form* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    br.signForm(*rrf);
    br.executeForm(*rrf);
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    br.signForm(*rrf);
    br.executeForm(*rrf);
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    br.signForm(*rrf);
    br.executeForm(*rrf);
    return 0;
}