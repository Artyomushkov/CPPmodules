/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:29:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/29 12:23:39 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern& src) {

	(void)src;
}

Intern& Intern::operator=(const Intern& src) {

	(void)src;
	return *this;
}

Form* Intern::makeForm(const std::string& formName, const std::string& target) {

	std::string	types[3] = {"shrubbery creation", "robotomy request",
		"presidental pardon"};
	int i = 0;
	while (formName.compare(types[i]) && i < 3)
		++i;
	switch (i) {
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentalPardonForm(target);
		case 3:
			throw Intern::NoSuchTypeException();
	}
	return (NULL);
}

const char* Intern::NoSuchTypeException::what() const throw() {

	return "There isn't any forms like this";
}
