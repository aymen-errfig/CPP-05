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
    Bureaucrat bur(1);
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    rrf->beSigned(bur);
    bur.executeForm(*rrf);
}
