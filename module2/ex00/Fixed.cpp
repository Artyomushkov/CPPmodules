/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:43:54 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/03/15 13:01:41 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {

	std::cout << "Copy constructor called" <<std::endl;
	*this = src;
}

int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

Fixed&	Fixed::operator=(const Fixed& src) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->value = src.getRawBits();
	return *this;
}

void	Fixed::setRawBits(const int raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw; 
}
