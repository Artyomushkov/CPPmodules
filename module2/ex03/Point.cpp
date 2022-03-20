/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:05:53 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/21 19:16:31 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::~Point(void) {}

Point::Point(const Point& src) {

	*this = src;
}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point& Point::operator=(const Point& src) {
	
	if (this != &src) {
		this->x = static_cast<float>((src.getX()).getRawBits());
		this->y = static_cast<float>((src.getY()).getRawBits());
	}
	return *this;
}

Fixed	Point::getX(void) const {

	return this->x;
} 

Fixed	Point::getY(void) const {

	return this->y;
}
