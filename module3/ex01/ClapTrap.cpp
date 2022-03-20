/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:53:18 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/02/04 16:48:51 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("Rob"), hitpoints(10), energyPoints(10),
	attackDamage(0) {

		std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {

	std::cout << this->name << " ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitpoints(10),
	energyPoints(10), attackDamage(0) {

		std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {

	*this = src;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {

	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target) const {

	std::cout << "ClapTrap " << this->name << " attack " << target
		<< " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(const unsigned int amount) {

	if (amount < 0) {
		std::cout << "Amount can't be negative" << std::endl;
		return ;	
	}
	if (this->hitpoints - amount < 0) {
		std::cout << "Damage " << amount
			<< " is fatal. Robot is died" << std::endl;
		this->hitpoints = 0;
		return ;
	}
	this->hitpoints -= amount;
	std::cout 
		<< this->name
		<< ": damage " << amount << " is taken. Hitpoints left: " 
		<< this->hitpoints << std::endl;
}


void	ClapTrap::beRepaired(const unsigned int amount) {

	if (amount < 0) {
		std::cout << "Amount can't be negative" << std::endl;
		return ;	
	}
	if (this->energyPoints < static_cast<int>(amount)) {
		std::cout 
			<< "Amount is too high! " 
			<< "All available energy points is using to repaire" 
			<< std::endl;
		this->hitpoints += this->energyPoints;
		this->energyPoints = 0;
		std::cout
			<< this->name	
			<< ": After repairing: Hitpoints: " << this->hitpoints
			<< " Energy points: " << this->energyPoints << std::endl;
		return ;
	}
	this->hitpoints += amount;
	this->energyPoints -= amount;
	std::cout
		<< this->name
		<< ": After repairing: Hitpoints: " << this->hitpoints
		<< " Energy points: " << this->energyPoints << std::endl;
}
