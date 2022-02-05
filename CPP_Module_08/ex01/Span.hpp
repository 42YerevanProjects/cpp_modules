/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:13:14 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/05 18:18:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <iterator>
#include <vector>

class Span {
	private:
		std::vector<int>		storage;
		unsigned int			N;
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& other);
		~Span(void);

		Span&	operator=(const Span& other);
		int		size(void) const;
		int		capacity(void) const;
		void	addNumber(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template <typename It>
		void	addNumber(It begin, It end)
		{
			while (begin != end)
			{
				this->addNumber(*begin);
				begin++;
			}
		}
};

std::ostream&	operator<<(std::ostream& out, const Span& instance);
