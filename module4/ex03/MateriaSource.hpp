/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:45:48 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/26 16:05:40 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	
	private:
		AMateria *materias[4];
		int	amount;
	
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &other);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
};

#endif
