/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:15:04 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 13:06:04 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {

	FragTrap Rob;
	FragTrap Bob("Bob");

	Rob.attack("Bob");
	Bob.takeDamage(30);
	Bob.beRepaired(40);
	Bob.highFivesGuys();
	Bob.highFivesGuys();
	Rob.highFivesGuys();
}
