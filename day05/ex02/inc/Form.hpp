#ifndef	FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int execGrade;

public:
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			virtual ~GradeTooHighException() _NOEXCEPT;
			GradeTooHighException(const GradeTooHighException &ob);
			GradeTooHighException &operator=(const GradeTooHighException &ob);
			virtual const char *what() const throw();
	};
	class NotSignedException : public std::exception
	{
		public:
			NotSignedException();
			virtual ~NotSignedException() _NOEXCEPT;
			NotSignedException(const NotSignedException &ob);
			NotSignedException &operator=(const NotSignedException &ob);
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			virtual ~GradeTooLowException() _NOEXCEPT;
			GradeTooLowException(const GradeTooLowException &ob);
			GradeTooLowException &operator=(const GradeTooLowException &ob);
			virtual const char *what() const throw();
	};
	Form();
	Form(const std::string name, const int signGrade, const int execGrade);
	~Form();
	Form(const Form &ob);
	Form &operator=(const Form &ob);
	std::string getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecGrade() const;
	void beSigned(Bureaucrat &br);
	void execute(Bureaucrat const & executor) const;
	virtual void action() const;
};

std::ostream &operator<<(std::ostream &o, Form const &br);

#endif