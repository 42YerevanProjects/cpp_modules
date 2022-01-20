/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
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
	Zombie(void)
	~Zombie(void);

	const std::string&	get_name(void) const;
	const std::string&	get_type(void) const;
	void				set_name(std::string name);
	void				set_type(std::string type);

	void				announce(void) const;
};
