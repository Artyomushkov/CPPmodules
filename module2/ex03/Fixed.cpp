/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:43:54 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/21 16:58:43 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0) {}

Fixed::Fixed(const int num) {

	this->value = num << this->fractional_bits;
}

Fixed::Fixed(const float num) {

	this->value = static_cast<int>(roundf(num * (1 << this->fractional_bits)));
}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed& src) {

	*this = src;
}

int		Fixed::getRawBits(void) const {

	return this->value;
}

const Fixed&	Fixed::operator=(const Fixed& src) const {

	if (this != &src)
		this->value = src.getRawBits();
	return *this;
}

void	Fixed::setRawBits(const int raw) {

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

bool	Fixed::operator>(const Fixed& src) const {
	
	return (this->value > src.getRawBits());
}

bool	Fixed::operator<(const Fixed& src) const {
	
	return (this->value < src.getRawBits());
}

bool	Fixed::operator>=(const Fixed& src) const {
	
	return (this->value >= src.getRawBits());
}

bool	Fixed::operator<=(const Fixed& src) const {
	
	return (this->value <= src.getRawBits());
}

bool	Fixed::operator==(const Fixed& src) const {
	
	return (this->value == src.getRawBits());
}

bool	Fixed::operator!=(const Fixed& src) const {
	
	return (this->value != src.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& src) {

	Fixed	res;
		
	res.setRawBits(this->value + src.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed &src) {

	Fixed	res;
	
	res.setRawBits(this->value - src.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed &src) {

	Fixed	res;

	long	a = static_cast<long>(this->value);
	long	b = static_cast<long>(src.getRawBits());
	int		num = static_cast<int>((a * b) / (1 << this->fractional_bits));
	res.setRawBits(num);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &src) {

	Fixed res;

	long	a = static_cast<long>(this->value);
	long	b = static_cast<long>(src.getRawBits());
	int		num = static_cast<int>((a * (1 << this->fractional_bits)) / b);
	res.setRawBits(num);
	return (res);
}

Fixed&	Fixed::operator++(void) {

	this->value += 1;
	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed	res(*this);
	++*this;
	return res;
}

Fixed&	Fixed::operator--(void) {

	this->value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed	res(*this);
	--*this;
	return res;
}

Fixed&			Fixed::min(Fixed& a, Fixed& b) {

	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {

	if (a < b)
		return (a);
	return (b);
}

Fixed&			Fixed::max(Fixed& a, Fixed& b) {

	if (a < b)
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {

	if (a < b)
		return (b);
	return (a);
}

Fixed:: operator float(void) const {
	return this->toFloat();
}
