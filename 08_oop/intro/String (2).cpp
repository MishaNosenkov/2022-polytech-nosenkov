#include "String.h" 
#include <iostream>
#include <cstring>
String::String() 
{ 
    length = 0; 
    data = new char[1]; 
    data[0] = '\0'; 
} 
 
String::String(const char* init) 
{ 
    // std::cout << "ctor" << std::endl; 
    length = strlen(init); 
    data = new char[length+1]; 
    strcpy(data, init); 
} 

String::~String()
{
	delete[] data;
}
 
unsigned int String::get_length() 
{ 
    return length; 
} 
 
const char* String::c_str() 
{ 
    return data; 
} 
 
char String::operator[](unsigned int pos) 
{ 
    return data[pos]; 
} 
 
String String::operator+(String addStr)
{ 
   char* dest = new char(length + addStr.get_length());
   strcpy(dest, data); 
   strcpy(dest + length, addStr.c_str());
   String resString(dest);
   delete[] dest;
    return resString;
   //return addStr;
} 

std::ostream& operator<<(std::ostream &out, String str) 
{
    out << str.c_str();
	return out;	
}
 
