/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:22 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/16 01:19:25 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook () {
    this->m_index = 0;
    return ;
    }
PhoneBook::~PhoneBook () { return ;}

void PhoneBook::Add_Contact()
{
    system("clear");
    Phonebook[this->m_index % 8].Newcontact();
    m_index++ ;
}

std::string PhoneBook::truncate(const std::string str) {
        if (str.length() > 10) {
            return str.substr(0, 9) + '.'; 
        }
        return str;
};

static int stoi(std::string num, int index)
{
    int i = 0;
    int result = 0;
    int cond = -1;
    
    while  (num[i]  && isspace(num[i]))
        i++;
    if (num[i] =='-')
        return (-1);
    else if (num[i] =='+')
        i++;
    while (num[i] && isdigit(num[i]))
    {
        cond = 1;
        result = (result * 10 ) + (num[i] - '0');
        if(result > 8 || result > index -1)
            return (-1);
        i++;
    }
    while  (num[i]  && isspace(num[i]))
            i++;
    if (num[i] || cond != 1)
        return(-1);
    return (result);
}

void PhoneBook::print()
{
    int i ;
    int index = 0;

    std::string field;
    system("clear");
    std::cout << std::setw(10)<< "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) <<"Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    
    for (i = 0;(i < 8 && i < this->m_index);i++)
    {
        std::cout << std::setw(10) << i
                  << "|" << std::setw(10) << truncate(Phonebook[i].get_name())
                  << "|" << std::setw(10)<< truncate(Phonebook[i].get_lname())
                  << "|" << std::setw(10) << truncate(Phonebook[i].get_nickname()) << std::endl;

    }
    if (m_index == 0)
    {
            std::cout << "PhoneBook is empty \n";
            return;
        }
        std::cout << "Enter the index of the contact to display :";
        std::getline(std::cin, field);
        if (std::cin.eof())
        {
		    std::cout << std::endl;
            return;
        }
        index = stoi(field, i);
        if (index > (-1))
            Phonebook[index].print();
        else
            std::cout << "Invalid index." << std::endl;

}