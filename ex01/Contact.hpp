/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:12 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/08 21:48:15 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact{
    int m_index;
    std::string m_firstname;
    std::string m_nickname;
    std::string m_lastname;
    std::string m_number;
    std::string m_darketsecret;
public:
    Contact();
    ~Contact();
    void Newcontact();
    void print();
    std::string  getInput(const std::string prompt,int flag);
	std::string	get_name(void) ;
	std::string	get_lname(void) ;
	std::string	get_nickname(void) ;
	std::string	get_number(void) ;
	std::string	get_secret(void) ;
	void		set_name(std::string str);
	void		set_lname(std::string str);
	void		set_nick(std::string str);
	void		set_number(std::string str);
	void		set_secret(std::string str);};
#endif