/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:22:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/23 22:25:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 				value;
		static const int	fractBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(const float val);
		Fixed(const int val);
		~Fixed(void);

		/* Operator Overloads */
		Fixed&			operator=(const Fixed& other);
		bool			operator>(const Fixed& other) const;
		bool			operator<(const Fixed& other) const;
		bool			operator>=(const Fixed& other) const;
		bool			operator<=(const Fixed& other) const;
		bool			operator==(const Fixed& other) const;
		bool			operator!=(const Fixed& other) const;
		Fixed			operator+(const Fixed& other) const;
		Fixed			operator-(const Fixed& other) const;
		Fixed			operator*(const Fixed& other) const;
		Fixed			operator/(const Fixed& other) const;
		Fixed&			operator++(void);
		Fixed			operator++(int);
		Fixed&			operator--(void);
		Fixed			operator--(int);

		/* Access and modify methods */
		int 			getRawBits(void) const;
		void			setRawBits(const int raw);
		int 			toInt(void) const;
		float			toFloat(void) const;

		/* Min and Max functions */
		static Fixed&		min(Fixed& x, Fixed& y);
		static Fixed&		max(Fixed& x, Fixed& y);
		static const Fixed&	min(const Fixed& x, const Fixed& y);
		static const Fixed&	max(const Fixed& x, const Fixed& y);

};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);
