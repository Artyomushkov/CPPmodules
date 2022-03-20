/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:01:38 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 15:43:20 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* animal[6];

	int i = 0;
	while (i < 3) {
		animal[i] = new Dog();
		++i;
	}
	while (i < 6) {
		animal[i] = new Cat();
		++i;
	}
	std::cout << std::endl;

	i = 0;
	while (i < 6) {
		animal[i]->makeSound();
		++i;
	}
	std::cout << std::endl;

	i = 0;
	while (i < 6) {
		delete animal[i];
		++i;
	}
	std::cout << std::endl;

	Dog a;
	Dog b(a);

	std::cout << std::endl;
	a.getBrain();
	a.changeBrain("bone");
	a.getBrain();
	b.getBrain();
	std::cout << std::endl;

	Dog c;
	Dog d;

	d = c;
	std::cout << std::endl;
	d.getBrain();
	c.changeBrain("bone");
	c.getBrain();
	d.getBrain();
	std::cout << std::endl;
	
	return 0;
}
