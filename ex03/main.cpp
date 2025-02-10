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

#include "Intern.hpp"
#include <iostream>
int main()
{
    Bureaucrat bur(145);
    Bureaucrat bur2(137);
    Bureaucrat bur3(45);
    Intern someRandomIntern;
    AForm *rrf;
    AForm *rrb;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    rrb = someRandomIntern.makeForm("robotomy request", "Joe");
    if (rrf)
    {
        rrf->beSigned(bur);
        bur2.executeForm(*rrf);
    }
    if (rrb)
    {
        rrb->beSigned(bur3);
        bur3.executeForm(*rrb);
    }
}
