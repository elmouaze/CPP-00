/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:12 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/16 01:21:02 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
    std::string m_firstname;
    std::string m_nickname;
    std::string m_lastname;
    std::string m_number;
    std::string m_darketsecret;
public:
    Contact(void);
    ~Contact(void);
    void Newcontact(void);
    void print(void);
    std::string  getInput(const std::string prompt,int flag);
	std::string	get_name(void) ;
	std::string	get_lname(void) ;
	std::string	get_nickname(void) ;
	std::string	get_number(void) ;
	std::string	get_secret(void) ;

};
#endif