/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:42:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 22:44:18 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Pony {
	private:
		std::string	name;
		std::string	origin;
		int 		age;
		bool		magical;
	public:
		Pony(std::string name, std::string origin, int age);

		const std::string&	getName(void) const;
		const std::string&	getOrigin(void) const;
		int 				getAge(void) const;
		bool				isMagical(void) const;
	
		void				setName(std::string name);
		void				setOrigin(std::string origin);
		void				setAge(int age);

		void				run(void) const;
		void				eat(void) const;
		void				speak(void) const;
};
