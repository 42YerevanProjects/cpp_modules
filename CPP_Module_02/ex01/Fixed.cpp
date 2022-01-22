/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:00:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/22 22:01:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(val * (1 << Fixed::fractBits));
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (val << Fixed::fractBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int		Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

int 	Fixed::toInt() const
{
	return (this->value >> Fixed::fractBits);
}

float	Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << Fixed::fractBits));
}
