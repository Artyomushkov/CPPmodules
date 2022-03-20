/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 15:06:00 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H
# define _CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	
	private:
		Brain*	brain;
	
	public:
		Cat(void);
		~Cat(void);
		Cat(const std::string &name);
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		
		void	makeSound(void) const;
};

#endif
