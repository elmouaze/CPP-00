/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:17 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/16 01:22:53 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>      
#include <iostream>

class PhoneBook{
    Contact Phonebook[8];
    int m_index;

public:
    PhoneBook(void);
    ~PhoneBook(void);
    void Add_Contact(void);
    void print(void);
    std::string truncate(const std::string str);
};


