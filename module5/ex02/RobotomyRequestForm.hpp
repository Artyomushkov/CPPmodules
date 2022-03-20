/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:09:09 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/28 14:56:02 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:
		std::string	target;

	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

		void	execute(const Bureaucrat& executor) const;
};

#endif
