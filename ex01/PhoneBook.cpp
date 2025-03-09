/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:22 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/09 23:36:53 by ael-moua         ###   ########.fr       */
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

int stoi(std::string num, int index)
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
void Phonebook::print()
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
                  << "|" << std::setw(10) << truncate(phonebook[i].get_name())
                  << "|" << std::setw(10)<< truncate(phonebook[i].get_lname())
                  << "|" << std::setw(10) << truncate(phonebook[i].get_nickname()) << std::endl;

    }
    while (1)
    {
        std::cout << "Enter the index of the contact to display :";
        std::getline(std::cin, field);
        if (!field.compare("exit"))
            break;
        index = stoi(field, i);
        if (index > (-1))
            phonebook[index].print();
        else
            std::cout << "Invalid index." << std::endl;
    }
}