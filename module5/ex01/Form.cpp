/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:22:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 11:45:55 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Jack"), if_signed(false), grade_sign(10), grade_exec(20) {}

Form::~Form(void) {}

Form::Form(const std::string& name, const int grade_sign, const int grade_exec) : 
	name(name), if_signed(0), grade_sign(grade_sign), grade_exec(grade_exec) {

	if (this->grade_sign < 1 || this->grade_exec < 1)
		throw Form::GradeTooHighException();
	if (this->grade_sign > 150 || this->grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : 
	name(src.name), if_signed(0), grade_sign(src.grade_sign), grade_exec(src.grade_exec) {

	if (this->grade_sign < 1 || this->grade_exec < 1)
		throw Form::GradeTooHighException();
	if (this->grade_sign > 150 || this->grade_exec)
		throw Form::GradeTooLowException();
}

Form&	Form::operator=(const Form& src) {

	(void)src;
	return *this;
}

std::string Form::getName(void) const {

	return this->name;
}

bool Form::getIfSigned(void) const {

	return this->if_signed;
}

int Form::getGradeSign(void) const {

	return this->grade_sign;
}

std::string	Form::getIfSignedForInput(void) const {

	if (this->if_signed)
		return "signed";
	return "not signed";
}

int Form::getGradeExec(void) const {

	return this->grade_exec;
}

void	Form::beSigned(const Bureaucrat& bur) {

	if (this->if_signed == true)
		return ;
	if (bur.getGrade() <= this->grade_sign)
	   this->if_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
	
	return "Form: grade too high exception";
}

const char* Form::GradeTooLowException::what() const throw() {
	
	return "Form: grade too low exception";
}

std::ostream& operator<<(std::ostream& o, const Form& form) {

	o << "form " << form.getName() << ", "<< form.getIfSignedForInput() 
		<< ", grade to sign " << form.getGradeSign() 
		<< ", grade to execute " << form.getGradeExec() << std::endl;
	return o;
}
