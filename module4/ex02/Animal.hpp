/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 16:05:54 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H
# define _ANIMAL_H

#include <iostream>
#include <string>

class Animal {

	protected:
		std::string	type;

	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const std::string &name);
		Animal(const Animal& src);
		Animal& operator=(const Animal& src);
		
		std::string		getType() const;
		virtual void	makeSound(void) const = 0;
};

#endif
