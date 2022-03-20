/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:20:59 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/17 11:55:05 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

#include <iostream>
#include <string>

class	Weapon {

	private:
		std::string	type;

	public:
		Weapon(const std::string& input_type);
		~Weapon(void);
		const std::string&		getType(void) const;
		void					setType(const std::string& type);
};

#endif
