/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interpreter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:32:59 by shovsepy          #+#    #+#             */
/*   Updated: 2022/04/04 18:57:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERPRETER_HPP
# define INTERPRETER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

class Interpreter
{
private:
	Interpreter();

	std::string str;
	int type;

	int status[4];
	int ivalue;
	float fvalue;
	double dvalue;
	char cvalue;

	void parse(void);

	void convert(void);
	void fromInt(void);
	void fromFloat(void);
	void fromDouble(void);
	void fromChar(void);

	void setFlag(int status, int flag);

	enum Type {
		TypeChar,
		TypeInt,
		TypeFloat,
		TypeDouble,
		TypeLong,
		TypeInvalid
	};
public:
	Interpreter(std::string const &value);
	Interpreter(Interpreter const &other);
	virtual ~Interpreter();

	static const int isImpossible = 0x00000001;
	static const int nonDisplayable = 0x00000010;

	Interpreter &operator=(Interpreter const &other);

	bool floatIsValue(void) const;
	bool doubleIsValue(void) const;
	bool hasFlag(int status, int flag) const;

	int getAsInt(void) const;
	float getAsFloat(void) const;
	double getAsDouble(void) const;
	char getAsChar(void) const;
	std::string const &getRaw(void) const;
};

std::ostream &operator<<(std::ostream &out, Interpreter const &pr);

#endif
