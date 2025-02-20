#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib> 
int main()
{
    Phonebook book[8];
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
        if (!com.compare("1"))
            book->Add_Contact();
        // else if (!com.compare("2"))
        // else if (!com.compare("3"))
        // else
        //                system("clear");

        }
}
