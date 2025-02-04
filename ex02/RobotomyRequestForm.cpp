#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _isSigned(false), _target("target_name"), _gradeToExecute(45), _gradeToSign(72)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : _isSigned(false), _target(name), _gradeToExecute(45), _gradeToSign(72)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : _isSigned(false), _target("target_name"), _gradeToExecute(45), _gradeToSign(72)
{
	(void)src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		throw FormIsNotSigned();
	else
	{
		std::cout << "<driling noise>\n";
		std::srand(time(0));
		int num = std::rand();
		if (num % 2 == 0)
			std::cout << this->_target << " has been robotomized \n";
		else
			std::cout << this->_target << " robotomy failed \n";
	}
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return *this;
}
