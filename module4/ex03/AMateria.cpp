/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:19:28 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 19:31:01 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("Amateria") {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const std::string& type) : type(type) {}

AMateria::AMateria(const AMateria& src) {

	this->type = src.type;
}

AMateria& AMateria::operator=(const AMateria& src) {

	this->type = src.type;
	return *this;
}

const std::string& AMateria::getType() const {

	return this->type;
}

void	AMateria::use(ICharacter& target) {

	(void)target;
	std::cout << "do nothing" << std::endl;
}

void	AMateria::deactivated(void) {

	this->type = "unequip";
}
