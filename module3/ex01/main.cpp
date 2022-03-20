/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:15:04 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 14:53:11 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {

	ScavTrap Rob;
	ScavTrap Bob("Bob");

	Rob.attack("Bob");
	Bob.takeDamage(20);
	Bob.beRepaired(40);
	Bob.guardGate();
}
