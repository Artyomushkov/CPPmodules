/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:15:04 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 11:18:23 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

	ClapTrap Rob;
	ClapTrap Bob("Bob");

	Rob.attack("Bob");
	Bob.takeDamage(0);
	Bob.takeDamage(5);
	Bob.beRepaired(2);
}
