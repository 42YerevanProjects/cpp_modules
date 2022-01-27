/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:32:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 19:34:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain {
	private:
		std::string		ideas[100];
		unsigned int	size;
	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		Brain&				operator=(const Brain& other);
		void				addIdea(std::string idea);
		const std::string&	getIdea(unsigned int index) const;
};
