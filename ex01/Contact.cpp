#include "Contact.hpp"

Contact::Contact () { return ;}
Contact::~Contact () { return ;}

int empty(std::string str)
{
    int i = 0;
    while (i < (int)str.length())
    {
        if (!isspace(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int valid_num(std::string field, size_t size)
{
    for(size_t i = 0; i < size; i++) {
        if (!isdigit(field[i]))
        {
            std::cout << "Field should only contain numbers⚠️.\n"; 
            return (1);
        }
    }
    return (0);
}
std::string  getInput(const std::string prompt,int flag) {
      std::string field;
        while (1)
        {
            std::cout << prompt;
            std::getline(std::cin, field);
            if (empty(field))
            {
                std::cout << "Field cannot be empty ⚠️.\n";
                continue;
            }
            else if (flag == 1 && valid_num(field, field.length()))
                continue;
            break;
        } 
        return (field);
    }

void Contact::Newcontact()
{
    this->m_firstname = getInput("Enter First Name: ", 0);
    this->m_lastname =  getInput("Enter Last Name: ",  0);
    this->m_nickname = getInput("Enter Nickname: ", 0);
    this->m_number = getInput("Enter Phone Number: ",1);
    this->m_darketsecret = getInput("Enter Darkest Secret: ",0);

}
void Contact::print()
{
    std::cout <<"First Name:    "<< this->m_firstname << std::endl;
    std::cout <<"Last Name:     "<< this->m_lastname << std::endl;
    std::cout <<"Nickname:      "<< this->m_nickname << std::endl;
    std::cout <<"Phone Number:  "<< this->m_number << std::endl;
    std::cout <<"Darkest Secret: "<< this->m_darketsecret << std::endl;

}

std::string	Contact::get_name(void) 
{
    return(this->m_firstname);
}
std::string	Contact::get_lname(void)
{
    return(this->m_lastname);
}
std::string	Contact::get_nickname(void)
{
    return(this->m_nickname);
}
std::string	Contact::get_number(void)
{
    return(this->m_number);
}
std::string	Contact::get_secret(void) 
{
    return(this->m_darketsecret);
}

void	Contact::set_name(std::string str)
{
    this->m_firstname = str;
}
void	Contact::set_lname(std::string str)
{
    this->m_lastname = str;
}
void	Contact::set_nick(std::string str)
{
    this->m_nickname = str;
}
void	Contact::set_number(std::string str)
{
    this->m_number = str;
}
void	Contact::set_secret(std::string str)
{
    this->m_darketsecret = str;
}