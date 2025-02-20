#include "Contact.hpp"
class Phonebook{
    Contact phonebook[8];
    int m_index = 1;
public:
    Phonebook(void);
    ~Phonebook(void);
    void Add_Contact();
    {
     m_index++;
       phonebook[m_index % 8].Newcontact(m_index);
    }

};