/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:01:18 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/13 18:43:15 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void) {
	
	Contact		current_contact;
	std::string	command;
	Phonebook	phonebook;

	while (1) {
		std::getline(std::cin, command);
		if (command.compare("EXIT") == 0)
			break;
		if (command.compare("ADD") == 0) {
			current_contact.init();
			phonebook.add_contact(current_contact);
		}
		if (command.compare("SEARCH") == 0) {
			phonebook.show_contacts();
		}
	}
}
