/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:47:32 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 15:45:36 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& input_name) : name(input_name) {}

Zombie::~Zombie(void) {

	std::cout << this->name << " is died" << std::endl;
}

void	Zombie::announce(void) const {

	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}
