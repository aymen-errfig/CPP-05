#ifndef SCF_HPP
#define SCF_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
bool _isSigned;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &name);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	void beSigned(Bureaucrat &bur);
	void execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};


#endif