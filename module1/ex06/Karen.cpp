/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:35:58 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 17:26:27 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void) const {
	
	std::cout 
		<< "I love to get extra bacon for my 7XL-double-cheese-"
		<< "triple-pickle-special-ketchup burger. I just love it!" 
		<< std::endl;
}

void	Karen::info(void) const {

	std::cout
		<< "I cannot believe adding extra bacon cost more money. " 
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void) const {

	std::cout
		<< "I think I deserve to have some extra bacon for free. " 
		<< "I’ve been coming here for years and you just"
		<< "started working here last month."
		<< std::endl;
}

void	Karen::error(void) const {

	std::cout
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void Karen::no_action(void) const {

	std::cout
		<< "[ Probably complaining about insignificant problems ]" << std::endl; 
}


static void	print_actions(int n, std::string actions[4], void (Karen:: *ptr[5])(void) const) {

	Karen karen;

	for (int i = n; i < 4; ++i) {
		std::cout << "[ " << actions[i] << " ]" << std::endl;
		(karen.*ptr[i])();
		std::cout << std::endl;
	}
}

void	Karen::complain(const std::string& level) {

	std::string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen:: *ptr[5])(void) const = {
		ptr[0] = &Karen::debug,
		ptr[1] = &Karen::info,
		ptr[2] = &Karen::warning,
		ptr[3] = &Karen::error,
		ptr[4] = &Karen::no_action
	};
	int i = 0;
	while (level.compare(actions[i]) && i < 4)
		++i;
	switch (i) {
		case 0:
			print_actions(0, actions, ptr);
			break;
		case 1:
			print_actions(1, actions, ptr);
			break;
		case 2:
			print_actions(2, actions, ptr);
			break;
		case 3:
			print_actions(3, actions, ptr);
			break;
		case 4:
			(this->*ptr[4])();
	}
}
