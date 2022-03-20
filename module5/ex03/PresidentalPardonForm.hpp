/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:09:09 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 15:49:45 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTAL_HPP
# define PRESIDENTAL_HPP

#include "Form.hpp"

class PresidentalPardonForm : public Form {

	private:
		std::string	target;

	public:
		PresidentalPardonForm(void);
		~PresidentalPardonForm(void);
		PresidentalPardonForm(const std::string& target);
		PresidentalPardonForm(const PresidentalPardonForm& src);
		PresidentalPardonForm& operator=(const PresidentalPardonForm& src);

		void	execute(const Bureaucrat& executor) const;
};

#endif
