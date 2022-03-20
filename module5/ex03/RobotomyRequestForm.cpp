/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:08:51 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/03/11 11:00:11 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
	Form("RobotomyRequestForm", 72, 45), target("jack") {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : 
	Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm
	(const RobotomyRequestForm& src) :
	Form("RobotomyRequestForm", 72, 45), target(src.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=
	(const RobotomyRequestForm& src) {
	
	this->target = src.target;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	
	if (this->getIfSigned() == false) {
		throw Form::IsNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExec()) { 
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "* some drilling noises *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->target << " was robotomized successfully" << std::endl;
	else
		std::cout << this->target << "'s robotomization failed" << std::endl;
}
