/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:25:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/30 13:30:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private:
		typedef struct	s_form
		{
			std::string	type;
			Form		*form;
		}				t_form;
	public:
		Intern(void);
		Intern(const Intern& other);
		~Intern(void);

		Intern&		operator=(const Intern& other);
		Form		*makeForm(const std::string& formName, const std::string& target) const;
};
