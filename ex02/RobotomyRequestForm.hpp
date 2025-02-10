#ifndef RRF_HPP
#define RRF_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};


#endif