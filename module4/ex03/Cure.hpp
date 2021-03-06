/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:19:15 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 16:26:15 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure& src);
		Cure& operator=(const Cure& src);
		
		virtual	AMateria*	clone() const;
		virtual	void		use(ICharacter& target);
};

#endif
