/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:22:18 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/27 17:34:27 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat {

	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const std::string& name, const int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& src);
		
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increment(void);
		void		decrement(void);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bur);

#endif
