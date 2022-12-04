#include <iostream>
class String 
{ 
    unsigned int length; 
    char* data;      
    public: 
        String(); 
        String(const char* init); 
        ~String();
        unsigned int get_length(); 
        const char* c_str(); 

        char operator[](unsigned int pos); 
        String operator+(String str);
// 		friend std::ostream &operator<<(std::ostream &out, String str);
};
    std::ostream &operator<<(std::ostream &out, String str);
