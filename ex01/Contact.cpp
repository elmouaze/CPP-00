#include "Contact.hpp"

Contact::Contact () { return ;}
Contact::~Contact () { return ;}

void getInput(const std::string& prompt, std::string &field) {
        do {
            std::cout << prompt;
            std::getline(std::cin, field);
            if (field.empty()) {
                std::cout << "⚠️Field cannot be empty.\n";
            }
        } while (field.empty());
    }

void Contact::Newcontact(int index)
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    getInput("Enter First Name: ", firstName);
    getInput("Enter Last Name: ", lastName);
    getInput("Enter Nickname: ", nickname);
    getInput("Enter Phone Number: ", phoneNumber);
    getInput("Enter Darkest Secret: ", darkestSecret);
    this->m_firstname =firstName;
    this->m_lastname =lastName;
    this->m_nickname =nickname;
    this->m_number =phoneNumber;
    this->m_darketsecret =darkestSecret;

}
