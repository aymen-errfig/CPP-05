#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : AForm(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(72, 45)
{
	(void)src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else if (this->getIsSigned() == false)
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
