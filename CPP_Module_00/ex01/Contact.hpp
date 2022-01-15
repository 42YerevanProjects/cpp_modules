/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 23:14:15 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/15 23:15:17 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Contact {
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_secret;
	std::string	_number;
public:
	std::string&	get_firstname(void) const;
	std::string&	get_lastname(void) const;
	std::string&	get_nicktname(void) const;
	std::string&	get_secret(void) const;
	std::string&	get_number(void) const;
	void			set_firstname(std:string firstname);
	void			set_lasttname(std:string lastname);
	void			set_nickname(std:string nickname);
	void			set_secret(std:string secret);
	void			set_number(srd::string number);
};
