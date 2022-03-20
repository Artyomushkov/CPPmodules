/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 13:02:58 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Murka") {

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void) {

	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name) {

	std::cout << "Cat string constructor called" << std::endl;
}

Cat::Cat(const Cat& src) {

	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {

	if (this != &src)
		this->type = src.type;
	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}
