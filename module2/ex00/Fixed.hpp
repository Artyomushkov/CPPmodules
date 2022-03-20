/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:37:58 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/21 19:55:42 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {

	private:
		int					value;
		const static int	fractional_bits = 8;

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed& src);
		int		getRawBits(void) const;
		Fixed&	operator=(const Fixed& src);
		void	setRawBits(const int raw);

};

#endif
