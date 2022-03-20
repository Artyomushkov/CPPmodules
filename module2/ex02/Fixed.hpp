/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhizdahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:37:58 by jhizdahr          #+#    #+#             */
/*   Updated: 2022/01/21 16:22:00 by jhizdahr         ###   ########.fr       */
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
		
		bool	operator>(const Fixed& src) const;
		bool	operator<(const Fixed& src) const;
		bool	operator>=(const Fixed& src) const;
		bool	operator<=(const Fixed& src) const;
		bool	operator==(const Fixed& src) const;
		bool	operator!=(const Fixed& src) const;
		Fixed	operator+(const Fixed& src);
		Fixed	operator-(const Fixed& src);
		Fixed	operator*(const Fixed& src);
		Fixed	operator/(const Fixed& src);
		Fixed&	operator++(void); 
		Fixed	operator++(int);	
		Fixed&	operator--(void); 
		Fixed	operator--(int);

		static			Fixed& min(Fixed& a, Fixed& b);
		const static	Fixed& min(const Fixed& a, const Fixed& b);
		static  		Fixed& max(Fixed& a, Fixed& b);
		const static  	Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed);
		
#endif
