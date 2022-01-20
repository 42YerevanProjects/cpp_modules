/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:58:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 00:59:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);

		const std::string&	getName(void) const;
		const std::string&	getType(void) const;
		void				setName(std::string name);
		void				setType(std::string type);

		void				announce(void) const;
};
