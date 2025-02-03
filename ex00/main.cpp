/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:28:11 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/03 17:39:49 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a(151);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b(0);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat c("joe", 1);
    std::cout << c;
    try {
        c.increment();
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat d(150);
    std::cout << d;
    try {
        d.decrement();
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}