/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:47:32 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 17:59:39 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {

	std::cout << this->name << " is died" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}

void	Zombie::setname(const std::string& name) {

	this->name = name;
}	
