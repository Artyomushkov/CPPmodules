/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 15:37:37 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Scharik") {

	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void) {

	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name) {

	this->brain = new Brain();
	std::cout << "Dog string constructor called" << std::endl;
}

Dog::Dog(const Dog& src) {

	this->brain = new Brain();
	this->type = src.type;
	*this->brain = *src.brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {

	if (this != &src) {
		this->type = src.type;
		*this->brain = *src.brain;
	}
	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "Bark" << std::endl;
}

void	Dog::changeBrain(const std::string& idea) {

	this->brain->setIdeas(idea);
}

void	Dog::getBrain(void) const {

	this->brain->getIdeas();
}
