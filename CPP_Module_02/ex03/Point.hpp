/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:16:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/24 00:18:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point(void);
		Point(const Point&);
		Point(const float x, const float y);
		~Point();

		Point&	operator=(const Point& other);

		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};
