/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:30:43 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 16:43:32 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Rob_clap_name"), name("Rob") {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hitpoints = FragTrap::hitpoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << this->name << " DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : 
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {

	std::cout << "DiamondTrap string constructor called" << std::endl;
	this->hitpoints = FragTrap::hitpoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {

	*this = src;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {

	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
		this->ClapTrap::name = src.ClapTrap::name;
	}
	return *this;
}

void	DiamondTrap::attack(const std::string& target) const {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const {

	std::cout << "My name is " << this->name 
		<< " but everybody calls me " << ClapTrap::name << std::endl;
}

