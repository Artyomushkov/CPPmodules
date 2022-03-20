/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:26:56 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/25 15:26:27 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H
# define _BRAIN_H

#include "Animal.hpp"

class Brain {
	
	protected:
		std::string	ideas[100];

	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain& src);
		Brain& operator=(const Brain& src);
		void	setIdeas(const std::string& idea); 
		void	getIdeas(void) const; 
};

#endif
