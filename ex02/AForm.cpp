/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:54:09 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/03 18:37:16 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _isSigned(false), _name("default_form"), _gradeToExecute(150), _gradeToSign(150)
{
}

AForm::AForm(const std::string name) : _isSigned(false), _name(name), _gradeToExecute(150), _gradeToSign(150)
{
}

AForm::AForm(int gradeToSign, int gradeToExecute) : _isSigned(false), _name("default_form"), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _isSigned(false), _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &src) : _gradeToExecute(src._gradeToExecute), _gradeToSign(src._gradeToSign)
{
	(void)src;
}

const std::string &AForm::getName() const
{
	return _name;
}

void AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

AForm::~AForm()
{
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

AForm &AForm::operator=(AForm const &rhs)
{
	(void)rhs;
	return *this;
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
	out << "AForm Name: " << form.getName() << "\n"
		<< "Signed: " << form.getIsSigned() << "\n"
		<< "Grade to Sign: " << form.getGradeToSign() << "\n"
		<< "Grade to Execute: " << form.getGradeToExecute() << std::endl;
	return out;
}
