/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:28:11 by aerrfig           #+#    #+#             */
/*   Updated: 2025/02/03 17:50:23 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form a("form 1", 100, 150);
    std::cout << a;
    Bureaucrat bur(101);
    std::cout << bur;
    bur.signForm(a);
    
    std::cout << "\n\n";

    bur.increment();
    bur.signForm(a);
    std::cout << a;
}