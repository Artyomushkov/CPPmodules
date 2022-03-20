/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:21:04 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/27 11:11:39 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("default"), allocated(0) {

	for (int i = 0; i < 4; ++i)
		materias[i] = nullptr;
}

Character::~Character(void) {

	for (int i = 0; i < this->allocated; ++i)
		delete this->materias[i];
}

Character::Character(const std::string &name) : name(name), allocated(0) {

	for (int i = 0; i < 4; ++i)
		materias[i] = nullptr;
}

Character::Character(const Character &src) : 
	name(src.name), allocated(src.allocated) {

	int i = 0;
	while (i < src.allocated) {
		this->equip(src.materias[i]->clone());
		++i;
	}
	while (i < 4) {
		this->materias[i] = nullptr;
		++i;
	}
}

Character&	Character::operator=(const Character &src) {

	this->name = src.name;
	int i = 0;
	while (i < this->allocated) {
		delete this->materias[i];
		++i;
	}
	this->allocated = src.allocated;
	i = 0;
	while (i < this->allocated) {
		this->equip(src.materias[i]->clone());
		++i;
	}
	while (i < 4) {
		this->materias[i] = nullptr;
		++i;
	}
	return *this;
}

const std::string& Character::getName() const {

	return this->name;
}

void	Character::equip(AMateria* m)
{
	int i = 0;
 
	while (this->materias[i] != nullptr && i < 4) {
		if (this->materias[i] == m)
			return ;
		if (this->materias[i]->getType() == "unequip") {	
			delete this->materias[i];
			this->materias[i] = m;
			return ;
		}
		++i;
	}
	if (i < 4) {
		this->materias[i] = m;
		this->allocated++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->materias[idx] == nullptr)
		return ;
	this->materias[idx]->deactivated();
}

void	Character::use(int idx, ICharacter& target) {

	if (idx < 0 || idx > 4 || this->materias[idx] == nullptr ||
			this->materias[idx]->getType() == "unequip")
		return ;
	this->materias[idx]->use(target);
}
