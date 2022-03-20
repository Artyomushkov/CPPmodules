/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:47:43 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 16:51:21 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& src);
		ScavTrap&	operator=(const ScavTrap& src);
		void	guardGate(void) const;
		void	attack(const std::string& target) const;
};



#endif
