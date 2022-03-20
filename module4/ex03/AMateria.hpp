/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:19:15 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 18:52:07 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {

	protected:
		std::string	type;

	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& src);
		AMateria& operator=(const AMateria& src);
		
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		void	deactivated(void);
};

#endif
