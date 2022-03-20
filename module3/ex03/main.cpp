/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:15:04 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 17:04:59 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {

	DiamondTrap Rob;
	DiamondTrap Bob("Bob");

	Rob.attack("Bob");
	Bob.takeDamage(30);
	Bob.beRepaired(40);
	Bob.highFivesGuys();
	Rob.highFivesGuys();
	Rob.guardGate();
	Bob.whoAmI();
}
