#include <iostream>

using namespace std;

float deg(float a, float b)
{
  
    if (a == 0 && b == 0)
    {
    	cout << "unsertain ";
    	return 0;
	}
	if(b == 0) return 1;
    float rez = a;
    for (int i = 1; i < b; i++)
    {
        rez *= a;
    }
    return rez;
}

int main()
{

while(true)
{
    char sign, quit; 
    float rez, a, b = 0;
    cout << "Enter first number, the sign and the second number " << endl;
    cin >> a;  
    if (a == 2004) break;
    cin >> sign;
    cin >> b; 
    if(sign == '+') rez = a+b;
    if(sign == '-') rez = a-b;
    if(sign == '*') rez = a*b;
    if(sign == '/' && b != 0) rez = a/b;
    if(sign == '/' && b == 0) cout << "Error action";
    if(sign == '^') rez = deg(a,b);
    cout << rez << endl;
    cout << "If you want to quit, enter the year of my birthday" << endl;
}
return 0;
}
