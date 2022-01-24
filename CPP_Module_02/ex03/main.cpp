/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 23:34:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/23 23:37:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

static void	printData(const Point& A, const Point& B, const Point& C, const Point& P)
{
	std::cout << "Triangle vertices are ";
	std::cout << "A(" << A.getX().toFloat() << ", " << A.getY().toFloat() << "), ";
	std::cout << "B(" << B.getX().toFloat() << ", " << B.getY().toFloat() << "), ";
	std::cout << "C(" << C.getX().toFloat() << ", " << C.getY().toFloat() << ")";
	std::cout << "\n" <<std::endl;
	std::cout << "Point P is ";
	std::cout << "P(" << P.getX().toFloat() << ", " << P.getY().toFloat() << ")\n" << std::endl;
}

int main( void ) 
{
	Point		A(0.f, 0.f);
	Point		B(10.f, 30.f);
	Point		C(20.f, 0.f);
	Point		P(10.f, 15.f);
	std::string	answer;

	answer = bsp(A, B, C, P) ? " " : " not ";
	printData(A, B, C, P);
	std::cout << "Point P is" << answer << "in the triangle ABC!" << std::endl;

	return 0;
}
