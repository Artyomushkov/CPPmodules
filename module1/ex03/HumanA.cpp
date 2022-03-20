/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:44:05 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 11:59:36 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& in_name, Weapon& in_weapon) : 
	name(in_name), weapon(in_weapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) const {

	std::cout << this->name << " attacks with his " << this->weapon.getType() 
		<< std::endl;
}

void	HumanA::setWeapon(const Weapon& weapon) {

	this->weapon = weapon;
}
