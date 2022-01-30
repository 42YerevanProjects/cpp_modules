/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyrequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:48:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/30 01:55:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) 
        : Form("RobotomyrequestForm", 72, 45), target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) 
        : Form("RobotomyrequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) 
        : Form("RobotomyrequestForm", 72, 45), target(other.getTarget()) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

const std::string&	RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void				RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	this->checkExecutability(executor);

	std::cout << "* Unbearable drilling noises *" << std::endl;
	if (rand() % 2)
	{
		std::cout << "The victi... " << this->target;
		std::cout << " has been successfully robotomized!" << std::endl;
	}
	else
		std::cout << "The robotomization on " << this->target << " failed!" << std::endl;
}
