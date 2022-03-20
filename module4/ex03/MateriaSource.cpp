/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:16 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/27 11:08:14 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): amount(0) {
	
	for (int i = 0; i < 4; i++)
		this->materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &other): 
	amount(other.amount) {
	
	int i = 0;
	while (i < other.amount) {
		this->learnMateria(other.materias[i]->clone());
		++i;
	}
	while (i < 4) {
		this->materias[i] = nullptr;
		++i;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->amount; i++)
		delete this->materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {

	for (int i = 0; i < this->amount; i++)
		delete this->materias[i];
	this->amount = 0;
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.materias[i]->clone());
	for (int i = 0; i < 4; i++)
		this->materias[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->amount == 4 || m == nullptr)
		return ;
	this->materias[this->amount] = m;
	this->amount++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->amount; i++)
		if (this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	return (nullptr);
}
