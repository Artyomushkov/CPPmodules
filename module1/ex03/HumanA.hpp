/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:43:55 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 11:59:43 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

#include "Weapon.hpp"

class	HumanA {

	private:
		std::string	name;
		Weapon 		&weapon;

	public:
		HumanA(const std::string& in_name, Weapon& in_weapon);
		~HumanA(void);
		void	attack(void) const;
		void	setWeapon(const Weapon& weapon);
};

#endif
