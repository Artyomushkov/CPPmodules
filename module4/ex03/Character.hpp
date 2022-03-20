/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:20:55 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 18:06:42 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter {

	private:
		std::string name;
		AMateria*	materias[4];
		int			allocated;

	public:
		Character(void);
		~Character(void);
		Character(const std::string &name);
		Character(const Character &src);
		Character&	operator=(const Character &src);

		const std::string&	getName() const;
		void				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif
