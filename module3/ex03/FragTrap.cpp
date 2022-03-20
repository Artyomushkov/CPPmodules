/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:42:18 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 15:00:09 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int FragTrap::highFives = 0;

FragTrap::FragTrap(void) {

		std::cout << "FragTrap default constructor called" << std::endl;
		this->energyPoints = 100;
		this->attackDamage = 30;
}

FragTrap::~FragTrap(void) {

	std::cout << this->name << " FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ScavTrap(name) {

		std::cout << "FragTrap string constructor called" << std::endl;
		this->energyPoints = 100;
		this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src) {

	*this = src;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {

	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) {

	++FragTrap::highFives;
	std::cout
		<< "High five by " << this->name	
		<< ". High fives amount: " << FragTrap::highFives << std::endl;
}

void	FragTrap::attack(const std::string& target) const {

	std::cout << "FragTrap " << this->name << " attack " << target
		<< " causing " << this->attackDamage << " points of damage!" << std::endl;
}
