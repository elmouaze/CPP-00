#include <string>
#include <iostream>
class Contact{
    int m_index;
    std::string m_firstname;
    std::string m_nickname;
    std::string m_lastname;
    std::string m_number;
    std::string m_darketsecret;
public:
    Contact();
    ~Contact();
    void Newcontact(int index);
    void print(){
        std::cout << m_firstname << " " << m_lastname << " " << m_number << std::endl;
    };
};