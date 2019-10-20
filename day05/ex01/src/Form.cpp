#include "Form.hpp"

Form::Form(): name("Anonym"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << this->name << " created" << std::endl;
}
Form::Form(const std::string name, const int signGrade, const int execGrade): name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << this->name << " created" << std::endl;
}
Form::~Form()
{
	std::cout << this->name << " removed" << std::endl;
}
Form::Form(const Form &ob) : name(ob.name), isSigned(ob.isSigned), signGrade(ob.isSigned), execGrade(ob.execGrade)
{
}
Form &Form::operator=(const Form &ob)
{
	Form *br = new Form(ob.name, ob.signGrade, ob.execGrade);
	br->isSigned = ob.isSigned;
	return (*br);
}
std::string Form::getName() const{return (this->name);}
bool Form::getSigned() const{return (this->isSigned);}
int Form::getSignGrade() const{return (this->signGrade);}
int Form::getExecGrade() const{return (this->execGrade);}

void Form::beSigned(Bureaucrat &br)
{
	if (this->signGrade < br.getGrade())
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

std::ostream &operator<<(std::ostream &o, Form const &br)
{
	o<<br.getName() << " can "  << (br.getSigned() ? "sign " : "not sign ")<< "with sign grade " << br.getSigned() << " and execution grade "<<br.getExecGrade();
	return (o);
}

Form::GradeTooHighException::GradeTooHighException(){}
Form::GradeTooHighException::~GradeTooHighException() _NOEXCEPT {}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &ob){(void)ob;}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &ob)
{
	(void)ob;
	return (*this);
}
Form::GradeTooLowException::GradeTooLowException(){}
Form::GradeTooLowException::~GradeTooLowException() _NOEXCEPT {}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &ob){(void)ob;}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &ob)
{
	(void)ob;
	return (*this);
}
const char *Form::GradeTooHighException::whate() const throw()
{
	return ("Grade too hight");
}
const char *Form::GradeTooLowException::whate() const throw()
{
	return ("Grade too low");
}