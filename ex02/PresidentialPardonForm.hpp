#ifndef PPF_HPP
#define PPF_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
	bool _isSigned;
	const std::string _target;
	const int _gradeToExecute;
	const int _gradeToSign;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();

	void beSigned(Bureaucrat &bur);
	void execute(Bureaucrat const & executor) const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};


#endif