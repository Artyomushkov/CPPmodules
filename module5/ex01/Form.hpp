/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:22:18 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/27 18:56:15 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form {

	private:
		const std::string	name;
		bool				if_signed;
		const int			grade_sign;
		const int			grade_exec;

		Form& operator=(const Form& src);

	public:
		Form(void);
		~Form(void);
		Form(const std::string& name, const int grade_sign, const int grade_exec);
		Form(const Form& src);
		
		std::string	getName(void) const;
		bool		getIfSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		std::string	getIfSignedForInput(void) const;

		void	beSigned(const Bureaucrat& bur);


		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& o, const Form& form);

#endif
