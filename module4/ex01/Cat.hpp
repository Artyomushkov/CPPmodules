/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 19:52:04 by jhizdahr         ###   ########.fr       */
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
		virtual ~Cat(void);
		Cat(const std::string &name);
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		
		void	makeSound(void) const;
};

#endif
