/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:22:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/27 17:24:24 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Jack"), grade(20) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const std::string& name, const int grade) : 
	name(name), grade(grade) {

	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : 
	name(src.name), grade(src.grade) {

	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& src) {

	this->grade = src.grade;
	return *this;
}

std::string Bureaucrat::getName(void) const {

	return this->name;
}

int Bureaucrat::getGrade(void) const {

	return this->grade;
}

void	Bureaucrat::increment(void) {

	--this->grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement(void) {

	++this->grade;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	
	return "Bureaucrat: grade too high exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	
	return "Bureaucrat: grade too low exception";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bur) {

	o << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return o;
}
