/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:21:01 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 11:55:30 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& input_type) : type(input_type) {}

Weapon::~Weapon(void) {}

const std::string&	Weapon::getType(void) const {

	return this->type;
}

void	Weapon::setType(const std::string& type) {

	this->type = type;
}
