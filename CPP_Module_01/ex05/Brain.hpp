/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:57:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 21:58:32 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	private:
		unsigned long	neurons;
	public:
		Brain();
		Brain(unsigned long n);
	
		unsigned long	get_neurons(void) const;
		std::string		identify(void) const;
		void			set_neurons(unsigned long n);
};
