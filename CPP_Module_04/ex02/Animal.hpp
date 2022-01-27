/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:39:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 23:41:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
	protected:
		std::string	type;
	public:
		virtual ~Animal(void);

		virtual Animal&		operator=(const Animal& other) = 0;
		const std::string&	getType(void) const;
		void				setType(const std::string& type);
		virtual void		makeSound(void) const = 0;
		virtual Brain		*getBrain(void) const = 0;
};
