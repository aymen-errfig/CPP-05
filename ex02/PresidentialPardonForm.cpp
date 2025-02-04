#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _isSigned(false), _target("target_name"), _gradeToExecute(5), _gradeToSign(25)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name) : _isSigned(false), _target(name), _gradeToExecute(5), _gradeToSign(25)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : _isSigned(false), _target("target_name"), _gradeToExecute(5), _gradeToSign(25)
{
	(void)src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		throw FormIsNotSigned();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return *this;
}
