/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:07:20 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 14:20:38 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

	try {
		Form paper("paper", 0, 10);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}	
	try {
		Form paper("paper", 10, 151);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "* signing forms tests *" << std::endl;
	Bureaucrat	joe("Joe", 10);
	Form		important("important", 2, 2);
	Form		usual("usual", 20, 20);
	try {
		important.beSigned(joe);
		usual.beSigned(joe);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	joe.signForm(important);
	joe.signForm(usual);
}
