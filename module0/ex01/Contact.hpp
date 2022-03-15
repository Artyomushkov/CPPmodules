/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:48:36 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/15 13:06:06 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public:
		Contact(void);
		~Contact(void);
		void	init(void);
		void	show_formated_contact(const int index) const;
		void	show_inf_about_contact(void) const;
};

#endif
