#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

AForm*	Intern::ShrubberyCreation(const std::string& target) const {
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::RobotomyRequest(const std::string& target) const {
	return new RobotomyRequestForm(target);
}

AForm*	Intern::PresidentialPardon(const std::string& target) const {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*fnc[3])(const std::string&) const = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
	AForm *p = nullptr;
	int found = -1;
	for (size_t i = 0; i < 3; i++)
	{
		if (formName == names[i])
		{
			found = i;
			break;
		}
	}
	if (found > -1)
	{
		p = (this->*fnc[found])(formTarget);
		std::cout << "Intern creates " << formName << "\n";
	}
	else
		std::cout << "Intern can't create " << formName << "\n";
	return (p);
}


Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}
