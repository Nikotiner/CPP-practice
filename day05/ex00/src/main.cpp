#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat br("Bureaucrat", 2);
    try
    {
        br.incGrade();
        br.incGrade();
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.whate() << std::endl;
    }
    try
    {
        for (int i = 0; i < 150; i++)
           br.decGrade();
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.whate() << std::endl;
    }
    return 0;
}