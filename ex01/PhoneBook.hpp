#include "Contact.hpp"
#include <iomanip>      

class Phonebook{
    Contact phonebook[8];
    int m_index;

public:
    Phonebook(void);
    ~Phonebook(void);
    void Add_Contact();
    void print();
    std::string truncate(const std::string &str);  
};