/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:22 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/08 21:58:02 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook () {
    this->m_index = 0;
    return ;
    }
Phonebook::~Phonebook () { return ;}

void Phonebook::Add_Contact()
{
    system("clear");
    phonebook[this->m_index % 8].Newcontact();
    m_index++ ;
}

std::string Phonebook::truncate(const std::string str) {
        if (str.length() > 10) {
            return str.substr(0, 9) + '.'; 
        }
        return str;
};

void Phonebook::print()
{
    int i ;
    int index = 0;

    system("clear");
    std::cout << std::setw(10)<< "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) <<"Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    
    for (i = 0;(i < 8 && i < this->m_index);i++)
    {
        std::cout << std::setw(10) << i
                  << "|" << std::setw(10) << truncate(phonebook[i].get_name())
                  << "|" << std::setw(10)<< truncate(phonebook[i].get_lname())
                  << "|" << std::setw(10) << truncate(phonebook[i].get_nickname()) << std::endl;

    }
        std::cout << "Enter the index of the contact to display :";
        std::cin >> index;
        
        if (index >= 0 && index < i)
        {
            phonebook[index].print();
            break;
        } else 
            std::cout << "Invalid index." << std::endl;

}