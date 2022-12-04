#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int strtoint(const char*);
const char* inttostr(int);

const char* mul(const char* a, const char* b)
{
    return inttostr(strtoint(a) * strtoint(b));
}


int main()
{

    //cout << strtoint("-20") << " " << strtoint("8");
    //cout << inttostr(-160) << " " << inttostr(-160);
    
     const char* rez = nullptr;
     rez = mul("-134", "8");
     cout << rez; 
    return 0;
}

int strtoint(const char* a)
{
    int rez = 0;
    int len = 0;
    int firstDig = 0;
    int sign = 1;
    int tenPow = 1;
    if(a[0] == '-')
    {
        firstDig = 1;
        sign = -1;
    }
    while(a[len++] != 0);
    for(int i = len - 2; i >= firstDig; i--)
    {
        rez += (a[i] - 0x30) * tenPow;
        tenPow *= 10;
    }
    return sign * rez;
}

const char* inttostr(int s)
{
    static char mass[] = {0,0,0,0,0,0,0,0,0,0,0};
    bool negative = s < 0;
    s = s < 0 ? -s : s;
    int index = 9;
    while(true)
    {
        mass[index--] = s % 10 + 0x30;
        s /= 10;
        if(s == 0) break;  
    }
    if (negative) mass[index--] = '-';
    return &mass[index + 1];
}
