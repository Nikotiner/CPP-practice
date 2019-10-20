#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form form("Visa", 49, 150);
    Form form1("Kill ticket", 100, 150);
    Bureaucrat br("Bureaucrat", 50);
    br.signForm(form);
    br.signForm(form1);
    std::cout << form << std::endl;
    return 0;
}