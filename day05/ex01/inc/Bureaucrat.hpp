#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			virtual ~GradeTooHighException() _NOEXCEPT;
			GradeTooHighException(const GradeTooHighException &ob);
			GradeTooHighException &operator=(const GradeTooHighException &ob);
			virtual const char *whate() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			virtual ~GradeTooLowException() _NOEXCEPT;
			GradeTooLowException(const GradeTooLowException &ob);
			GradeTooLowException &operator=(const GradeTooLowException &ob);
			virtual const char *whate() const throw();
	};
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &ob);
	Bureaucrat &operator=(const Bureaucrat &ob);
	std::string 	getName() const;
	int 			getGrade() const;
	void 			incGrade();
	void 			decGrade();
	void 			signForm(Form &form);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &br);

#endif