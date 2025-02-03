/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:28:11 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/03 18:18:46 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    PresidentialPardonForm a("form 1");
    // std::cout << a;
    Bureaucrat bur(101);
    std::cout << bur;
    bur.signAForm(a);
    
    std::cout << "\n\n";

    bur.increment();
    bur.signAForm(a);
    std::cout << a;
}