/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 12:05:42 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H
# define _DOG_H

#include "Animal.hpp"

class Dog : public Animal {
	
	public:
		Dog(void);
		~Dog(void);
		Dog(const std::string &name);
		Dog(const Dog& src);
		Dog& operator=(const Dog& src);
		
		void	makeSound(void) const;
};

#endif
