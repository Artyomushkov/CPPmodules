/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:00:33 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/03/07 16:26:57 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void		Contact::init(void) {
	
	std::cout << "first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void	format_output(std::string str) {
	
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << " | ";
}

void	Contact::show_formated_contact(const int index) const {
	
	std::cout << std::setw(10) << index << " | ";
	format_output(this->first_name);
	format_output(this->last_name);
	format_output(this->nickname);
	std::cout << std::endl;
}

void	Contact::show_inf_about_contact(void) const {

	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl; 
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
   	std::cout << "Darkest secret: " << this->darkest_secret << std::endl; 	
}
