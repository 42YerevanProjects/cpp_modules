/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:21:14 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 21:27:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void		swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T&	min(T& a, T& b)
{
	return (a < b ? a : b);
}

template<typename T>
const T&	max(T& a, T& b)
{
	return (a > b ? a : b);
}
