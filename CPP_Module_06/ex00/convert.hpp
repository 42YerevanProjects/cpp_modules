/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:21:05 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 11:30:39 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <cstring>
#include <cmath>

bool			ft_isdigit(char c);
bool			canConvertToChar(double number);
bool			canConvertToInt(double number);
bool			canConvertToFloat(double number);
int				handleSpecial(const char *input);
int				handleNumeric(const char *input);
