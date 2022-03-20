/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:47:21 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 16:15:26 by jhizdahr         ###   ########.fr       */
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
		Zombie(const std::string& input_name);
		~Zombie(void);
		void	announce(void) const;
};

Zombie*	newZombie(const std::string& name);
void	randomChump(const std::string& name);

#endif
