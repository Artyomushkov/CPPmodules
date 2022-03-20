/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 15:37:35 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Murka") {

	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void) {

	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name) {

	this->brain = new Brain();
	std::cout << "Cat string constructor called" << std::endl;
}

Cat::Cat(const Cat& src) {

	this->brain = new Brain();
	this->type = src.type;
	*this->brain = *src.brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {

	if (this != &src) {
		this->type = src.type;
		*this->brain = *src.brain;
	}
	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}
