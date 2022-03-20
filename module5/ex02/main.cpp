/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:07:20 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 15:53:00 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

int main(void) {

	ShrubberyCreationForm	shr("home");
	PresidentalPardonForm	pres("Lola");
	RobotomyRequestForm		rob("kregg");
	Bureaucrat				joe("Joe", 10);
	Bureaucrat				alex("Alex", 145);
	Bureaucrat				harry("Harry", 2); 

	shr.beSigned(joe);
	pres.beSigned(harry);
	rob.beSigned(joe);

	joe.executeForm(shr);
	alex.executeForm(shr);
	joe.executeForm(rob);
	alex.executeForm(rob);
	harry.executeForm(pres);
	joe.executeForm(pres);
}
