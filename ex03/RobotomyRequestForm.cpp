#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _isSigned(false), AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : _isSigned(false), AForm(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : _isSigned(false), AForm(72, 45)
{
	(void)src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else if (this->_isSigned == false)
		throw FormIsNotSigned();
	else
	{
		std::cout << "<driling noise>\n";
		std::srand(time(0));
		int num = std::rand();
		if (num % 2 == 0)
			std::cout << this->getName() << " has been robotomized \n";
		else
			std::cout << this->getName() << " robotomy failed \n";
	}
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return *this;
}
