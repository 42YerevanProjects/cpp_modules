/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:23:11 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 22:25:40 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

class Human {
	private:
		Brain	brain;
	public:
		const Brain&	getBrain(void) const;
		std::string		identify(void) const;
};
