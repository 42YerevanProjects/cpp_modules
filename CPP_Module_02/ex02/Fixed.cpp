/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:36:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/23 22:45:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors and Destructor */
Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	*this = other; // Overloaded =
}

Fixed::Fixed(const float val)
{
	this->value = (int)roundf(val * (1 << Fixed::fractBits));
}

Fixed::Fixed(const int val)
{
	this->value = (val << Fixed::fractBits);
}

Fixed::~Fixed() {}

/* Operator Overloads */
Fixed&	Fixed::operator=(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits((this->getRawBits() * other.getRawBits()) >> Fixed::fractBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	if (other.getRawBits() == 0)
		throw std::logic_error("Division by zero!");
	return (Fixed(this->toFloat() / other.toFloat()));
}

/* Pre-increment overload */
Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

/* Post-increment overload */
Fixed	Fixed::operator++(int)
{
	Fixed	curr(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (curr);
}

/* Pre-decrement overload */
Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

/* Post-decrement overload */
Fixed	Fixed::operator--(int)
{
	Fixed	curr(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (curr);
}

/* Output Stream Operator Overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

/* Access and modify methods */
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

/* Min and Max functions */
Fixed&	Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return (x);
	return (y);
}

Fixed&	Fixed::max(Fixed& x, Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}

const Fixed&	Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x < y)
		return (x);
	return (y);
}

const Fixed&	Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}
