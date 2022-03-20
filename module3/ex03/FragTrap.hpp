/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:33:18 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/22 16:42:36 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : virtual public ScavTrap {

	private:
		static int	highFives;
	
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& src);
		FragTrap& operator=(const FragTrap& src);
		void	highFivesGuys(void);
		void    attack(const std::string& target) const;
};

#endif
