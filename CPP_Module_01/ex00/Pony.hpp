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

	const std::string&	get_name(void) const;
	const std::string&	get_origin(void) const;
	int 				get_age(void) const;
	bool				is_magical(void) const;
	
	void				set_name(std::string name);
	void				set_origin(std::string origin);
	void				set_age(int age);

	void				run(void) const;
	void				eat(void) const;
	void				speak(void) const;
};
