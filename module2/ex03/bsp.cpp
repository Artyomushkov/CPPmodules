/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:33:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/21 16:40:29 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	my_abs(const float a) {

	if (a < 0)
		return (-a);
	return (a);
}	

static float	square(const Point A, const Point B, const Point C) {

	return my_abs(static_cast<float>((A.getX() - C.getX()) * (B.getY() - C.getY())
					- (B.getX() - C.getX()) * (A.getY() - C.getY())) / 2);
}


bool	bsp(const Point a, const Point b, const Point c, const Point point) {
	
	float	Sabp = square(a, b, point);
	float	Sacp = square(a, c, point);
	float	Sbcp = square(b, c, point);
	
	if (Sabp == 0 || Sacp == 0 || Sbcp == 0)
		return (false);

	float	check_square = Sabp + Sacp + Sbcp;
	
	if (my_abs(square(a, b, c) - check_square) < 0.00001)
		return (true);
	return (false);
}
