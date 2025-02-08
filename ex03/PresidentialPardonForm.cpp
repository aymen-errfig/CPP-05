#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _isSigned(false), AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name) : _isSigned(false), AForm(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : _isSigned(false), AForm(25, 5)
{
	(void)src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		throw FormIsNotSigned();
	else
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return *this;
}
