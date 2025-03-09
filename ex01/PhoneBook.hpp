/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:17 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/08 21:52:26 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>      
#include <iostream>
#include <stdlib.h> 

class Phonebook{
    Contact phonebook[8];
    int m_index;

public:
    Phonebook(void);
    ~Phonebook(void);
    void Add_Contact();
    void print();
    std::string truncate(const std::string str);  
};