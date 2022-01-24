/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:51:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/24 19:53:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(const Point& a, const Point& b, const Point& c)
{
	float x1, y1;
	float x2, y2;
	float x3, y3;

	x1 = a.getX().toFloat();
	y1 = a.getY().toFloat();
	x2 = b.getX().toFloat();
	y2 = b.getY().toFloat();
	x3 = c.getX().toFloat();
	y3 = c.getY().toFloat();

	return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	/* Calculate area of triangle ABC */
	float A = area(a, b, c);

	/* Calculate area of triangle PBC */
	float A1 = area(point, b, c);

	/* Calculate area of triangle APC */
	float A2 = area(a, point, c);

	/* Calculate area of triangle ABP */
	float A3 = area(a, b, point);

   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}
