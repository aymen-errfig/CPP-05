#ifndef RRF_HPP
#define RRF_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
	bool _isSigned;
	const std::string _target;
	const int _gradeToExecute;
	const int _gradeToSign;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();

	void beSigned(Bureaucrat &bur);
	void execute(Bureaucrat const & executor) const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};


#endif