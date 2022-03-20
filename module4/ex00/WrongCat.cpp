/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 13:04:16 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongMurka") {

	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& name) : WrongAnimal(name) {

	std::cout << "WrongCat string constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {

	*this = src;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {

	if (this != &src)
		this->type = src.type;
	return *this;
}

void	WrongCat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}
