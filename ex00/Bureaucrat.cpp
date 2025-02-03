/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:28:15 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/03 17:38:26 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Bur"), grade(1)
{
}

Bureaucrat::Bureaucrat(int gr) : name("Bur"), grade(gr)
{
	if (gr < 1)
		throw GradeTooHighException();
	if (gr > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string &name, int gr) : name(name), grade(gr)
{
	if (gr < 1)
		throw GradeTooHighException();
	if (gr > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	(void)src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	(void)rhs;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::increment()
{
	this->grade -= 1;
	if (this->grade < 1)
	{
		this->grade += 1;
		throw GradeTooHighException();
	}
}

void Bureaucrat::decrement()
{
	this->grade += 1;
	if (this->grade > 150)
	{
		this->grade -= 1;
		throw GradeTooLowException();
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << "." << std::endl;
	return (out);
}
