/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:10:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/30 00:20:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) 
	: Form("ShrubberyCreationForm", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) 
	: Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
	: Form("ShrubberyCreationForm", 145, 137), target(other.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

const std::string&		ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void					ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	file;
	std::string		name;

	this->checkExecutability(executor);
	name = target + "_shrubbery";
	file.open(name.c_str(), std::ofstream::out);

    file << "      # #### ####               " << std::endl;
    file << "     ### \\/#|### |/####        " << std::endl;
    file << "    ##\\/#/ \\||/##/_/##/_#     " << std::endl;
    file << "  ###  \\/###|/ \\/ # #####     " << std::endl;
    file << " ##_\\_#\\_\\## | #/###_/_####  " << std::endl;
    file << "## #### # \\ #| /  #### ##/##   " << std::endl;
    file << " __#_--###`  |{,###---###-~     " << std::endl;
    file << "          \\ }{                 " << std::endl;
    file << "           }}{                  " << std::endl;
    file << "           }}{                  " << std::endl;
    file << "      ejm  {{}                  " << std::endl;
    file << "     , -=-~{ .-^- _             " << std::endl;
    file << "           `}                   " << std::endl;
    file << "            {                   " << std::endl;
	file.close();
}
