#include "PhoneBook.hpp"

Phonebook::Phonebook () {
    this->m_index = 0;
    return ;
    }
Phonebook::~Phonebook () { return ;}

void Phonebook::Add_Contact()
{
    phonebook[this->m_index % 8].Newcontact();
    m_index++ ;
}

std::string Phonebook::truncate(const std::string& str) {
        if (str.length() > 10) {
            return str.substr(0, 9) + '.'; 
        }
        return str;
};

void Phonebook::print()
{
    int i ,index = 0;
    std::cout << std::setw(10) << std::right << "Index"
              << "|" << std::setw(10) << std::right << "First Name"
              << "|" << std::setw(10) << std::right << "Last Name"
              << "|" << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    
    for (i = 0;(i < 8 && i < this->m_index);i++)
    {
        std::cout << std::setw(10) << std::right << i
                  << "|" << std::setw(10) << std::right << truncate(phonebook[i].get_name())
                  << "|" << std::setw(10) << std::right << truncate(phonebook[i].get_lname())
                  << "|" << std::setw(10) << std::right << truncate(phonebook[i].get_nickname()) << std::endl;

    }
    while (true && i > 0) {
        std::cout << "Enter the index of the contact to display :";
        std::cin >> index;
        if (index >= 0 && index < i) {
            phonebook[i-1].print();
            break;
        } else {
            std::cout << "Invalid index." << std::endl;
        }
    }
}