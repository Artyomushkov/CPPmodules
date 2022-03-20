/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:03:57 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/02/04 16:49:21 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

		std::cout << "ScavTrap default constructor called" << std::endl;
		this->hitpoints = 100;
		this->energyPoints = 50;
		this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {

	std::cout << this->name << " ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {

		std::cout << "ScavTrap string constructor called" << std::endl;
		this->hitpoints = 100;
		this->energyPoints = 50;
		this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) {

	*this = src;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {

	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate(void) const {

	std::cout 
		<< "ScavTrap " << this->name 
		<< " have entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target) const {

	std::cout << "ScavTrap " << this->name << " attack " << target
		<< " causing " << this->attackDamage << " points of damage!" << std::endl;
}
