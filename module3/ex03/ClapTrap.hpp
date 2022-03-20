/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:39:28 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 12:27:46 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class	ClapTrap {

	protected:
		std::string name;
		int			hitpoints;
		int			energyPoints;
		int			attackDamage;

	public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& src);
		ClapTrap& operator=(const ClapTrap& src);
		void	attack(const std::string& target) const;
		void	takeDamage(const unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
