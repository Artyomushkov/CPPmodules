/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:08:51 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 17:43:33 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(void) : 
	Form("PresidentalPardonForm", 25, 5), target("jack") {}

PresidentalPardonForm::~PresidentalPardonForm(void) {}

PresidentalPardonForm::PresidentalPardonForm(const std::string &target) : 
	Form("PresidentalPardonForm", 25, 5), target(target) {}

PresidentalPardonForm::PresidentalPardonForm
	(const PresidentalPardonForm& src) :
	Form("PresidentalPardonForm", 25, 5), target(src.target) {}

PresidentalPardonForm& PresidentalPardonForm::operator=
	(const PresidentalPardonForm& src) {
	
	this->target = src.target;
	return *this;
}

void	PresidentalPardonForm::execute(const Bureaucrat& executor) const{
	
	if (this->getIfSigned() == false) {
		throw Form::IsNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExec()) { 
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" 
		<< std::endl;
}
