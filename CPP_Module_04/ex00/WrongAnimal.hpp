/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:49:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 16:53:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string    type;
		WrongAnimal(const std::string& type);
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal(void);

		WrongAnimal&		operator=(const WrongAnimal& other);
		const std::string&	getType(void) const;
		void				setType(const std::string& type);
		void		makeSound(void) const;
};
