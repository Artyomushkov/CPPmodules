/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 15:36:39 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H
# define _DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	
	private:
		Brain*	brain;
	
	public:
		Dog(void);
		~Dog(void);
		Dog(const std::string &name);
		Dog(const Dog& src);
		Dog& operator=(const Dog& src);
		
		void	makeSound(void) const;
		void	changeBrain(const std::string& idea);
		void	getBrain(void) const; 
};

#endif
