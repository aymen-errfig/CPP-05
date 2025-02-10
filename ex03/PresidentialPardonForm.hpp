#ifndef PPF_HPP
#define PPF_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};


#endif