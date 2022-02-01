/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:46:14 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 21:50:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T>
void	iter(T *arr, size_t len, void (*func)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}
