/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:05:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/19 18:18:56 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

	private:
		const Fixed x;
		const Fixed y;

	public:
		Point(void);
		~Point(void);
		Point(const Point& src);
		Point(const float a, const float b);
		Point& operator=(const Point& src);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
