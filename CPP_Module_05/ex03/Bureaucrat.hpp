/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:51:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/29 15:59:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

class Form;

class Bureaucrat {
	private:
		static const int	maxGrade = 1;
		static const int	minGrade = 150;
		const std::string	name;
		int					grade;

		Bureaucrat(void);
	public:
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		Bureaucrat&			operator=(const Bureaucrat& other);
		const std::string&	getName(void) const;
		int 				getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form& form);
		void				executeForm(const Form& form);

	private:
		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat& b);
