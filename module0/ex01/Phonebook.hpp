/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:37:30 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 12:00:43 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"

class Phonebook {

	private:
		Contact	contacts[8];
		int		amount;

	public:
		Phonebook(void);
		~Phonebook(void);
		void	add_contact(const Contact now_contact);
		void	show_contacts(void) const;
};

#endif
