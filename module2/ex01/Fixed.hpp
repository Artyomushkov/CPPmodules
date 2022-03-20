/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:37:58 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/19 13:04:56 by jhizdahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

	private:
		int					value;
		const static int	fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed(void);
		Fixed(const Fixed& src);
		int		getRawBits(void) const;
		Fixed&	operator=(const Fixed& src);
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);
		
#endif
