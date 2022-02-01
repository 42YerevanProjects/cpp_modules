/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:20:19 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/31 02:25:42 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	canConvertToInt(double number)
{
	return (number <= std::numeric_limits<int>::max()
			&& number >= std::numeric_limits<int>::min()
			&& number != std::numeric_limits<double>::infinity()
			&& number != -std::numeric_limits<double>::infinity()
			&& number != std::numeric_limits<double>::quiet_NaN());
}

bool	canConvertToFloat(double number)
{
	return ((number <= std::numeric_limits<float>::max()
			&& number >= -std::numeric_limits<float>::max())
			|| number == std::numeric_limits<double>::infinity()
			|| number == -std::numeric_limits<double>::infinity()
			|| std::isnan(number));
}

bool	canConvertToChar(double number)
{
	if (number - static_cast<int>(number) != 0 || number > 127 || number < 0)
		std::cout << "char: impossible" << std::endl;

	else if (number <= 31 || number == 127)
		std::cout << "char: Non displayable" << std::endl;

	else
		return true;
	return false;
}

int		handleSpecial(const char *input)
{
	const char	*special_doubles[] =
	{
		"inf", "+inf", "-inf", "nan"
	};
	const char	*special_floats[] =
	{
		"inff", "+inff", "-inff", "nanf"
	};

	for (int i = 0; i < 4; i++)
	{
		if (!strcmp(special_floats[i], input))
			return (2);
		else if (!strcmp(special_doubles[i], input))
			return (3);
	}
	return (-1);
}

int		handleNumeric(const char *input)
{
	int	i;
	int	dots;

	i = 0;
	dots = 0;
	if (input[0] == '-' && input[1])
		i++;
	if (input[i] == '.' && (input[i + 1] == 'f' || input[i + 1] == 0))
		return (-1);
	while (input[i] == '.' || ft_isdigit(input[i]))
	{
		if (input[i] == '.')
			dots++;
		if (dots > 1)
			return (-1);
		i++;
	}
	if (!input[i])
	{
		if (dots == 1)
			return (3);
		return (1);
	}
	else if (input[i] == 'f' && !input[i + 1] && dots == 1)
		return (2);
	return (-1);
}
