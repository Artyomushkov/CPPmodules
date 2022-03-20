/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:22:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/02/03 12:32:23 by jhizdahr         ###   ########.fr       */
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

void	Bureaucrat::signForm(Form& form) {

	if (form.getIfSigned()) {
		std::cout << "Form " << form.getName() << " is already signed." << std::endl;
		return ;
	}
	if (this->grade <= form.getGradeSign()) {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		return;
	}
	std::cout << this->getName() << " couldn't sign " << form.getName() 
		<< " because his grade is too low" << std::endl;
	
}

void	Bureaucrat::executeForm(const Form& form) {

	try {
		form.execute(*this);
	}
	catch (const std::exception &e) {
		std::cout << this->name << " " << 
			form.getName() << " " << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " executed " << form.getName() << std::endl;
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
