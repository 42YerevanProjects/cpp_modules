/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:08:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 15:12:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string	type;
		Animal(const std::string& type);
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		Animal&				operator=(const Animal& other);
		const std::string&	getType(void) const;
		void				setType(const std::string& type);
		virtual void		makeSound(void) const;
};
