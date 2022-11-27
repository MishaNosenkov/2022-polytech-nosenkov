#include <iostream>
#include <cstdlib>
#include <stdlib.h>
//using namespace std;
const char* mul(const char* a, const char* b)
{
    static char rez[10];
    sprintf(rez,"%d",atoi(a)*atoi(b));
    return  rez;
}


int main()
{
    const char* rez = nullptr;
    rez = mul("2", "8");
    std::cout << rez; 
    return 0;
}
