/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:26:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/05 18:37:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : N(0)
{
	this->storage.reserve(0);
}

Span::Span(unsigned int N) : N(N)
{	
	this->storage.reserve(N);
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::~Span(void) {}

Span&	Span::operator=(const Span& other)
{
	this->N = other.N;
	this->storage = other.storage;

	return (*this);
}

int		Span::size(void) const
{
	return (this->storage.size());
}

int		Span::capacity(void) const
{
	return (this->N);
}

void	Span::addNumber(int n)
{
	if (this->storage.size() == N)
		throw std::overflow_error("Span has no more free spaces");
	this->storage.push_back(n);
}

int		Span::shortestSpan(void) const
{
	std::vector<int>	tmp;
	
	tmp = storage;
	if (storage.size() < 2)
		throw std::logic_error("Not enough numbers stored to provide a span");
	std::sort(tmp.begin(), tmp.end());
	return (tmp[1] - tmp[0]);
}

int		Span::longestSpan(void) const
{
	std::vector<int>	tmp;
	
	tmp = storage;
	if (storage.size() < 2)
		throw std::logic_error("Not enough numbers stored to provide a span");
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

std::ostream&	operator<<(std::ostream& out, const Span& instance)
{
	out << "Span of max size " << instance.capacity();
	out << " contains " << instance.size() << " numbers,";
	out << " shortest span is " << instance.shortestSpan();
	out << " and longest is " << instance.longestSpan();
	return (out);
}
