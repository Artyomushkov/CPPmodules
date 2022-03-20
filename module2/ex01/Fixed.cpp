/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:43:54 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/19 17:19:00 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {

	std::cout << "Int constructor called" << std::endl;
	this->value = num << this->fractional_bits;
}

Fixed::Fixed(const float num) {

	std::cout << "Float constructor called" << std::endl;
	this->value = static_cast<int>(roundf(num * (1 << this->fractional_bits)));
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {

	std::cout << "Copy constructor called" << std::endl;
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

float	Fixed::toFloat(void) const {

	return static_cast<float>(this->value) / (1 << this->fractional_bits);
}

int		Fixed::toInt(void) const {

	return this->value >> this->fractional_bits;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed) {

	o << fixed.toFloat();
	return o;
}
