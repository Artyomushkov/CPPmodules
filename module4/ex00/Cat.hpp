/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 12:05:07 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H
# define _CAT_H

#include "Animal.hpp"

class Cat : public Animal {
	
	public:
		Cat(void);
		~Cat(void);
		Cat(const std::string &name);
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		
		void	makeSound(void) const;
};

#endif
