#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _isSigned(false), _target("target_name"), _gradeToExecute(137), _gradeToSign(145)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) : _isSigned(false), _target(name), _gradeToExecute(137), _gradeToSign(145)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : _isSigned(false), _target("target_name"), _gradeToExecute(137), _gradeToSign(145)
{
	(void)src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		throw FormIsNotSigned();
	else
	{
		std::cout << "<driling noise>\n";
		std::ofstream outFile(this->_target+"");
		// if ()
	}
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return *this;
}
