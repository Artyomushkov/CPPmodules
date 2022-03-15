/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:37:42 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 12:02:11 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	
	this->amount = 0;
}

Phonebook::~Phonebook (void) {}

void	Phonebook::add_contact(const Contact now_contact) {

	if (this->amount < 8) {
		this->contacts[this->amount] = now_contact;
		this->amount++;
		return ;
	}
	for (int i = 0; i < 7; ++i) {
		this->contacts[i] = this->contacts[i + 1];
	}
	this->contacts[7] = now_contact;
}

void	fields_titles(void) {

	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "last name" << " | ";
	std::cout << std::setw(10) << "nickname" << " | ";
	std::cout << std::endl;
}

int		my_stoi(std::string str) {

	int	res;

	try {
		res = std::stoi(str);
	}
	catch (std::invalid_argument) {
		std::cout << "Invalid index: not a number" << std::endl;
		return (-1);
	}
	catch (std::out_of_range) {
		std::cout << "Invalid index: out of range" << std::endl;
		return (-1);
	}
	if (res < 0) {
		std::cout << "Invalid index: negative number" << std::endl;
		return (-1);
	}
	return (res);
}

void	Phonebook::show_contacts(void) const {

	std::string	str;

	fields_titles();
	for (int i = 0; i < this->amount; ++i) 
		this->contacts[i].show_formated_contact(i);
	if (this->amount == 0) {
		std::cout << "Notebook is empty!" << std::endl;
		return ;
	}
	std::cout << "Index: ";
	std::getline(std::cin, str);
	int index = my_stoi(str);
	if (index == -1)
		return ;
	if (index < 0) {
		std::cout << "Invalid number!" << std::endl;
		return ;
	}
	if (index >= this->amount) {
		std::cout << "This field is empty!" << std::endl;
		return ;
	}
	this->contacts[index].show_inf_about_contact();
}	
