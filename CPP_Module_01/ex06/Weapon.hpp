/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:10:15 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 23:11:26 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon(std::string type);

		const std::string&	getType(void) const;
		void 				setType(std::string type);
};
