/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:47:21 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 17:51:11 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string	name;

	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setname(const std::string& name);
};

Zombie*	zombieHorde(int N, const std::string& name);

#endif
