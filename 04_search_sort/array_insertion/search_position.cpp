/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int search_position(int mass[], int x, int n)
{
    int i = 0;
    while(mass[i] < x)
    {
        i++;
    }
    return i;
}
int main()
{
        int mass[] = {1,2,3,4,5,6,7,8,9,10,11,12,18,20};
		int n = sizeof(mass) / sizeof(mass[1]); 
		int a = search_position(mass, 19, n);
		cout << a;
    return 0;
}
