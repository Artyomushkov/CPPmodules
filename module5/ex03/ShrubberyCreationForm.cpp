/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:08:51 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 17:12:36 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
	Form("ShruberryCreationForm", 145, 137), target("home") {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : 
	Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm
	(const ShrubberyCreationForm& src) :
	Form("ShrubberyCreationForm", 145, 137), target(src.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=
	(const ShrubberyCreationForm& src) {
	
	this->target = src.target;
	return *this;
}

const char* ShrubberyCreationForm::FileIsNotOpened::what() const throw() {

	return "File is not opened";
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	
	if (this->getIfSigned() == false) {
		throw Form::IsNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExec()) { 
		throw Bureaucrat::GradeTooLowException();
	}
	std::ofstream ofs(this->target + "_shrubbery", std::ios::app);
	if (!ofs) {
		throw ShrubberyCreationForm::FileIsNotOpened();
	}
	ofs << "     *     " << std::endl
		<< "    ***    " << std::endl
		<< "   *****   " << std::endl
		<< "  *******  " << std::endl
		<< " ********* " << std::endl
		<< "     *     " << std::endl << std::endl;
	ofs.close();
}
