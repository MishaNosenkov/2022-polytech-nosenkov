#include <iostream>
using namespace std;

int line_search(int mass[], int num, int n)
{
	int counter = 0;
	for(int i = 0; i < n; ++i)
	{	
		if(mass[i] == num) 
		counter++;
	}
	return counter;
}

int main ()
{
	int num = 0;
	cout << "What do you want to find?" << endl;
	cin >> num;
	int mass[10] = {1,2,2,2,3,4,7,19,3,1};
	int n = sizeof(mass) / sizeof(mass[0]);
	cout << line_search(mass, num, n);
}
