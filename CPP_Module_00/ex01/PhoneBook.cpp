/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:28:15 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 02:29:17 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define c_pre "\001\033[1;34m\002"
#define c_pos "\001\033[0;0m\002"

void	print_name(std::string str)
{
	unsigned int j;

	j = 0;
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		j = 0;
		while (j++ < 10 - str.length())
			std::cout << " ";
		std::cout << str;
	}
}


int 	PhoneBook::get_size() const
{
	return (this->size);
}

void	PhoneBook::add_contact(std::string data[5])
{
	int	index;

	index = this->index;
	this->contacts[index].set_firstname(data[0]);
	this->contacts[index].set_lastname(data[1]);
	this->contacts[index].set_nickname(data[2]);
	this->contacts[index].set_number(data[3]);
	this->contacts[index].set_secret(data[4]);
	this->index = (index + 1) % 8;

	if (this->size < 8)
		this->size++;
}

void	PhoneBook::display_contact(int i) const
{
	std::cout << c_pre << "+----------+----------+----------+----------+" << c_pos << std::endl;
	std::cout << c_pre << "|  Contact information for specified index  |" << c_pos << std::endl;
	std::cout << c_pre << "+----------+----------+----------+----------+" << c_pos << std::endl;

	std::cout << "First Name: " << this->contacts[i].get_firstname() << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Number: " << this->contacts[i].get_number() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[i].get_secret() << std::endl;
}

void	PhoneBook::display_phonebook() const
{
	int i;

	i = 0;
	std::cout << c_pre << "+----------+----------+----------+----------+" << c_pos << std::endl;
	std::cout << c_pre << "|     index|first name| last name|  nickname|" << c_pos << std::endl;
	std::cout << c_pre << "+----------+----------+----------+----------+" << c_pos << std::endl;
	while (i < this->size)
	{
		std::cout << c_pre << "|         " << c_pos;
		std::cout << i;
		std::cout << c_pre << "|" << c_pos;
		print_name(this->contacts[i].get_firstname());
		std::cout << c_pre << "|" << c_pos;
		print_name(this->contacts[i].get_lastname());
		std::cout << c_pre << "|" << c_pos;
		print_name(this->contacts[i].get_nickname());
		std::cout << c_pre << "|" << c_pre << std::endl;
		i++;
	}
	std::cout << c_pre << "+----------+----------+----------+----------+" << c_pos << std::endl;
}
