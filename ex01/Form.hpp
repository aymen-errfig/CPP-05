/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:20:00 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/03 17:20:38 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
	bool _isSigned;
	const std::string _name;
	const int _gradeToExecute;
	const int _gradeToSign;

public:
	Form();
	Form(const std::string name);
	Form(int gradeToSign, int gradeToExecute);
	Form(const std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);

	const std::string &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bur);

	~Form();

	Form &operator=(Form const &rhs);
	
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif