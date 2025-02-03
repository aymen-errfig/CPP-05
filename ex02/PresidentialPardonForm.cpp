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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->_isSigned())
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return *this;
}
