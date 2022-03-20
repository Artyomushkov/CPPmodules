/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 13:03:14 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Scharik") {

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void) {

	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name) {

	std::cout << "Dog string constructor called" << std::endl;
}

Dog::Dog(const Dog& src) {

	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {

	if (this != &src)
		this->type = src.type;
	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "Bark" << std::endl;
}
