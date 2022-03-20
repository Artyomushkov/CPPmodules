/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:07:20 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 17:40:37 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"
#include "Intern.hpp"

int main(void) {

	Intern someRandomIntern;
	Form* rrf;
	try {
		rrf = someRandomIntern.makeForm("presidental pardon", "Bender");
		std::cout << rrf->getName() << std::endl;
		delete rrf;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		rrf = someRandomIntern.makeForm("presidentail pardon", "Bender");
		std::cout << rrf->getName() << std::endl;
		delete rrf;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
