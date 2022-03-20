/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:59:31 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/21 16:44:13 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {

	Point A(0, 0);
	Point B(5, 0);
	Point C(5, 5);
	Point check1(10, 8);
	Point check2(4, 2);
	Point check3(2.5, 2.5);
	
	std::cout << bsp(A, B, C, check1) << std::endl;
	std::cout << bsp(A, B, C, check2) << std::endl;
	std::cout << bsp(A, B, C, check3) << std::endl;
}
