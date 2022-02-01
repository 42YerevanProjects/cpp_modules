/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyst.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:20:19 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/31 02:25:42 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyst.hpp"

/* Exception */

TypeAnalyst::InvalidInputException::InvalidInputException(void) : msg("Invalid input!") {}

TypeAnalyst::InvalidInputException::InvalidInputException(const char *msg) : msg(msg) {}

const char	*TypeAnalyst::InvalidInputException::what() const throw() 
{
	return (this->msg);
}

/* Constructors, destructor and = overload */

TypeAnalyst::TypeAnalyst(void) : input('\0'), type(-1) {}

TypeAnalyst::TypeAnalyst(char *input) 
{
	if (!input)
		throw InvalidInputException("Input is empty!");

	this->input = input;
	this->type = TypeAnalyst::noType;
	validInput(); 
}

TypeAnalyst::TypeAnalyst(const TypeAnalyst& other) { *this = other; }

TypeAnalyst::~TypeAnalyst(void) {}

TypeAnalyst&	TypeAnalyst::operator=(const TypeAnalyst& other)
{
	this->type = other.type;
	return (*this);
}

/* Private Util Functions */

bool			TypeAnalyst::getType(void)
{
	this->type = handleSpecial(this->input);
	if (this->type != TypeAnalyst::noType)
		return true;
	if (ft_isdigit(input[0]) || input[0] == '-' || input[0] == '.')
	{
		this->type = handleNumeric(this->input);
		if (this->type != TypeAnalyst::noType)
			return true;
	}
	if (input[1])
		return false;
	this->type = TypeAnalyst::charType;
	return true;
}


void			TypeAnalyst::validInput(void)
{
	if (!getType())
		throw InvalidInputException("Input contains invalid symbols!");
}

const char		*TypeAnalyst::dotZero(double num) const
{
	if (num - static_cast<int>(num) == 0.0)
		return (".0");
	return ("");
}

/* Public Interface Functions */

void			TypeAnalyst::printCharType(void) const
{
	if (this->type == TypeAnalyst::intType)
	{
		if (canConvertToChar(atoi(input)))
			std::cout << "char: " << static_cast<char>(atoi(input)) << std::endl;
	}
	else if (this->type == TypeAnalyst::floatType)
	{
		if (canConvertToChar(atof(input)))
			std::cout << "char: " << static_cast<char>(atof(input)) << std::endl;
	}
	else if (this->type == TypeAnalyst::doubleType)
	{
		if (canConvertToChar(atof(input)))
			std::cout << "char: " << static_cast<char>(atof(input)) << std::endl;
	}
	else
		std::cout << "char: " << input << std::endl;
}

void			TypeAnalyst::printIntType(void) const
{
	if (this->type == TypeAnalyst::charType)
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;

	else if (this->type == TypeAnalyst::intType)
		std::cout << "int: " << atoi(input) << std::endl;

	else if (this->type == TypeAnalyst::floatType)
	{
		if (canConvertToInt(atof(input)))
			std::cout << "int: " << static_cast<int>(atof(input)) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}

	else if (this->type == TypeAnalyst::doubleType)
	{
		if (canConvertToInt(atof(input)))
			std::cout << "int: " << static_cast<int>(atof(input)) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
}

void			TypeAnalyst::printFloatType(void) const
{
	if (this->type == TypeAnalyst::charType)
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;

	else if (this->type == TypeAnalyst::intType)
		std::cout << "float: " << static_cast<float>(atoi(input)) << ".0f"<< std::endl;

	else if (this->type == TypeAnalyst::floatType)
	{
		std::cout << "float: " << atof(input);
		std::cout<< dotZero(static_cast<float>(atof(input))) << "f" << std::endl;
	}

	else if (this->type == TypeAnalyst::doubleType)
	{
		if (canConvertToFloat(atof(input)))
		{
			std::cout << "float: " << static_cast<float>(atof(input));
			std::cout<< dotZero(static_cast<double>(atof(input))) << "f" << std::endl;
		}
		else
			std::cout << "float: impossible" << std::endl;
	}
}

void			TypeAnalyst::printDoubleType(void) const
{
	if (this->type == TypeAnalyst::charType)
		std::cout << "double: " << static_cast<double>(type) << ".0" << std::endl;

	else if (this->type == TypeAnalyst::intType)
		std::cout << "double: " << static_cast<double>(atoi(input)) << ".0" << std::endl;

	else if (this->type == TypeAnalyst::floatType)
	{
		std::cout << "double: " << static_cast<double>(atof(input));
		std::cout << dotZero(static_cast<double>(atof(input))) << std::endl;
	}

	else if (this->type == TypeAnalyst::doubleType)
	{
		std::cout << "double: " << atof(input);
		std::cout << dotZero(static_cast<double>(atof(input))) << std::endl;
	}
}
