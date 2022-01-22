/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:06:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/22 19:11:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	private:
		int 				value;
		static const int	fractBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		~Fixed(void);

		Fixed&	operator=(const Fixed& other);
		int 	getRawBits(void) const;
		void	setRawBits(const int raw);
};
