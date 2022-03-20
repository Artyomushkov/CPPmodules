/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:07:20 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/27 17:23:54 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {

	Bureaucrat john("John", 10);
	try {
		Bureaucrat brad("Brad", -2);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << john << std::endl;
	john.decrement();
	std::cout << john << std::endl;
	Bureaucrat donald("Donald", 150);
	try {
		donald.decrement();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
