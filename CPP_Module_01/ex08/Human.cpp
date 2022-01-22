/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:27:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/21 23:29:18 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const& target)
{
	std::cout << "Human attacked " << target << " with meelee attack!" << std::endl;
}

void	Human::rangedAttack(std::string const& target)
{
	std::cout << "Human attacked " << target << " with ranged attack!" << std::endl;
}

void	Human::intimidatingShout(std::string const& target)
{
	std::cout << "Human shouted at " << target << std::endl;
}

void	Human::action(std::string const& action_name, std::string const& target)
{
	void (Human::*actions[])(std::string const&) = 
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	char	*action_names[] =
	{
		(char*)"meleeAttack",
		(char*)"rangedAttack",
		(char*)"intimidatingShout"
	};

	for (int i = 0; i < 3; i++)
	{
		if (action_name == action_names[i])
		{
			(this->*actions[i])(target);
			return ;
		}
	}
	std::cout << "Human action is undefined!" << std::endl;
}
