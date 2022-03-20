/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:09:27 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 17:58:53 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, const std::string& name) {

	Zombie*	res = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		res[i].setname(name);
	}
	return (res);
}
