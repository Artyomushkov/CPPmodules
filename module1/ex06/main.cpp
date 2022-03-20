/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:24:48 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/18 15:18:28 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"



int main(int argc, char **argv) {

	Karen karen;

	if (argc == 1 || argc > 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
}
