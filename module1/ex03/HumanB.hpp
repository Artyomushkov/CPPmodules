/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:43:55 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 12:00:17 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.hpp"

class	HumanB {

	private:
		std::string	name;
		Weapon 		*weapon;

	public:
		HumanB(const std::string& in_name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon& weapon);
};

#endif
