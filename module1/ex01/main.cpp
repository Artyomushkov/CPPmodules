/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:22:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 17:26:21 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

	int		n = 5;
	Zombie*	zombies = zombieHorde(n, "Zombie");
	for (int i = 0; i < n; ++i) {
		zombies[i].announce();
	}
	delete [] zombies;
}
