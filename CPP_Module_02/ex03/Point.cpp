/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:38:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/24 22:40:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(Fixed(0)), y(Fixed(0)) { }

Point::Point(const float x, const float y)
	: x(Fixed(x)), y(Fixed(y)) 
{ }

Point::Point(const Point& other)
{
	*this = other; // overloaded =
}

Point::~Point()
{

}

Point&	Point::operator=(const Point&)
{
	return (*this);
}

const Fixed&	Point::getX(void) const
{
	return (this->x);
}

const Fixed&	Point::getY(void) const
{
	return (this->y);
}
