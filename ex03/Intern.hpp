#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Intern
{

public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	AForm *makeForm(const std::string &formName, const std::string &formTarget);

	Intern &operator=(Intern const &rhs);
	AForm *ShrubberyCreation(const std::string &target) const;
	AForm *RobotomyRequest(const std::string &target) const;
	AForm *PresidentialPardon(const std::string &target) const;
};

#endif