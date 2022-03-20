/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:09:09 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 14:28:47 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

	private:
		std::string	target;

	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

		class FileIsNotOpened: public std::exception {
			virtual const char* what() const throw();
		};

		void	execute(const Bureaucrat& executor) const;
};

#endif
