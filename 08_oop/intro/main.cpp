#include "String.h"
#include <iostream>
int main()
{
    String str("da");
    String str2("net");
   // String str3 = (str + str2);
   // std::cout << str[1] << " "<< str.c_str() << " " << str.get_length();
   //std::cout << str.c_str() << " " << str2.c_str() << std::endl << str3.c_str() ;
  // std::cout << " str =" << str.c_str() << " str2 =" << str2.c_str() << " str + str2 =" << (str + str2).c_str() << std::endl ;
    std::cout << str << " " << str2 <<  (str + str2) <<  std::endl;
return 0;    
}
