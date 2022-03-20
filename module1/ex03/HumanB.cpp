/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:44:05 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 12:00:19 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& in_name) : 
	name(in_name) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) const {

	std::cout << this->name << " attacks with his " << this->weapon->getType()
		<< std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->weapon = &weapon;
}
