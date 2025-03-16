/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:48:35 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/16 00:43:21 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    std::cout << "Welcome to the PhoneBook!\n";
    while (1)
    {
        std::string com;
        std::cout << "Please enter the number  of command:\n";
        std::cout << "1 -  ADD    - Add a new contact\n";
        std::cout << "2 -  SEARCH - Search for a contact\n";
        std::cout << "3 -  EXIT   - Close the program\n";
        std::cout << "Enter your choice: ";
        std::getline(std::cin, com);
        if (!com.compare("ADD"))
            book.Add_Contact();
        else if (!com.compare("SEARCH"))
            book.print();
        else if (!com.compare("EXIT"))
            return (0);
        else if (std::cin.eof())
		    return (std::cout << std::endl,0);
        else
        {
            std::cout << "UNKNOWN choice \n"; 
        }
    }
    return (0);
}
