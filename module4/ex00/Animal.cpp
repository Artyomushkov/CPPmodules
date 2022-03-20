/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 13:03:32 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("any_animal") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(void) {

	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const std::string& name) : type(name) {

	std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(const Animal& src) {

	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src) {

	if (this != &src)
		this->type = src.type;
	return *this;
}

std::string	Animal::getType(void) const {

	return this->type;
}

void	Animal::makeSound(void) const {

	std::cout << "Some animal noise" << std::endl;
}
