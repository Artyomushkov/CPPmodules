/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:11 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 18:34:40 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = "idea";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(void) {

	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain& src) {

	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& src) {

	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = src.ideas[i];
	}
	return *this;
}

void	Brain::setIdeas(const std::string& idea) {

	for (int i = 0; i < 100; ++i) {
		this->ideas[i] = idea;
	}
}

void	Brain::getIdeas(void) const{

	for (int i = 0; i < 10; ++i) {
		std::cout << this->ideas[i] << " ";
	}
	std::cout << std::endl;
}
