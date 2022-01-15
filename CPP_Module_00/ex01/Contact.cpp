/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:34:15 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/15 23:17:17 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string&	Contact::get_firstname() const
{
	return (this->_firstname);
}

std::string&	Contact::get_lastname() const
{
	return (this->_lastname);
}

std::string&	Contact::get_nickname() const
{
	return (this->_nickname);
}

std::string&	Contact::get_secret() const
{
	return (this->_secret);
}

std::string&	Contact::get_number() const
{
	return (this->_number);
}

void		Contact::set_firstname(std::string firstname)
{
	this->_firstname = firstname;
}

void		Contact::set_lastname(std::string lastname)
{
	this->_lastname = lastname;
}

void		Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void		Contact::set_secret(std::string secret)
{
	this->_secret = secret;
}

void		Contact::set_number(std::string number)
{
	this->_number = number;
}
