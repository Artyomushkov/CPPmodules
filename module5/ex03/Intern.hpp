/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:10:06 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 17:29:27 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

class Intern {

	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern& src);
		Intern& operator=(const Intern& src);

		Form* makeForm(const std::string& formName, const std::string& target);

		class NoSuchTypeException: public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
