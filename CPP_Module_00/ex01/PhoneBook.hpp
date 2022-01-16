/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:04:15 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 00:05:17 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
public:
	PhoneBook() : size (0), index (0) {}
	int 	get_size(void) const;
	void	add_contact(std::string data[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
};
