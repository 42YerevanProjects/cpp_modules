/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyst.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:02:17 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/31 22:10:29 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "convert.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class TypeAnalyst {
	private:
		static const int	noType = -1;
		static const int	charType = 0;
		static const int	intType = 1;
		static const int	floatType = 2;
		static const int	doubleType = 3;
		const char			*input;
		int 				type;

		TypeAnalyst(void);
		bool			getType(void);
		void			validInput(void);
		const char		*dotZero(double num) const;

	public:
		TypeAnalyst(char *input);
		TypeAnalyst(const TypeAnalyst& other);
		~TypeAnalyst(void);

		TypeAnalyst&	operator=(const TypeAnalyst& other);
		void			printCharType(void) const;
		void			printIntType(void) const;
		void			printFloatType(void) const;
		void			printDoubleType(void) const;
	public:
		class InvalidInputException : public std::exception
		{
			private:
				const char	*msg;
			public:
				InvalidInputException(void);
				InvalidInputException(const char *msg);

				virtual const char	*what() const throw();
		};
};
