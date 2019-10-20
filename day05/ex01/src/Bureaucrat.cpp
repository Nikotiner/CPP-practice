#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat"), grade(1)
{
	std::cout << this->name << " with " << this->grade << " grade created" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << this->name << " with " << this->grade << " grade created" << std::endl;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)	
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " removed" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &ob) : name(ob.name), grade(ob.grade)
{
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ob)
{
	Bureaucrat *br = new Bureaucrat(ob.name, ob.grade);
	return (*br);
}
std::string 	Bureaucrat::getName() const {return (this->name);}

int 			Bureaucrat::getGrade() const {return (this->grade);}

void 			Bureaucrat::incGrade()
{
	if(this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--this->grade;
}
void 			Bureaucrat::decGrade(){
	if(this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++this->grade;
}
void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout << this->name << " can not sign " << form.getName() << " because " << e.whate() << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cout << this->name << " can not sign " << form.getName() << " because " << e.whate() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->name << " can not sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
std::ostream &operator<<(std::ostream &o, Bureaucrat const &br)
{
	o<<br.getName() << ", bureaucrat grade "  << br.getGrade();
	return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}
Bureaucrat::GradeTooHighException::~GradeTooHighException() _NOEXCEPT {}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &ob){(void)ob;}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &ob)
{
	(void)ob;
	return (*this);
}
Bureaucrat::GradeTooLowException::GradeTooLowException(){}
Bureaucrat::GradeTooLowException::~GradeTooLowException() _NOEXCEPT {}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &ob){(void)ob;}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &ob)
{
	(void)ob;
	return (*this);
}
const char *Bureaucrat::GradeTooLowException::whate() const throw()
{
	return ("Grade too low");
}
const char *Bureaucrat::GradeTooHighException::whate() const throw()
{
	return ("Grade too hight");
}