/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:19:15 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 16:26:32 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice& src);
		Ice& operator=(const Ice& src);
		
		virtual	AMateria*	clone() const;
		virtual	void		use(ICharacter& target);
};

#endif
