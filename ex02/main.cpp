/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:28:11 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/04 13:08:55 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bur(5);
    ShrubberyCreationForm a = ShrubberyCreationForm("form a");
    RobotomyRequestForm b = RobotomyRequestForm("form b");
    PresidentialPardonForm c = PresidentialPardonForm("form c");

    try
    {
        a.beSigned(bur);
        b.beSigned(bur);
        c.beSigned(bur);
        bur.executeForm(c);
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }
}