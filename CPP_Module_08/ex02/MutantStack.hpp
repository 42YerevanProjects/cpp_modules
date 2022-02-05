/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:05:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/05 20:10:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef	typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() { return this->c.begin(); };
		iterator	end() { return this->c.end(); };
};
