#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib> 
int main()
{
    Phonebook book;
    std::cout << "Welcome to the Phonebook!\n";
    while (1)
    {
        system("CLS");
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
            std::cout << "Wrong choice \n";
       
    }
    return (0);
}
