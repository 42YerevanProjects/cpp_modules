/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:25:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/21 23:26:18 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Human {
	private:
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void intimidatingShout(std::string const& target);
	public:
		void action(std::string const& action_name, std::string const& target);
};
