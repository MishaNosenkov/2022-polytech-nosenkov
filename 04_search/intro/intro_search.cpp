#include <iostream>
using namespace std;
int line_search(int mass[], int num, int n)
{
	for(int i = 0; i < n; ++i)
	{	
		if(mass[i] == num) return i;
	}
	return -1;
}
	int binary_search(int arr[], int l,int r, int x )
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_search(arr, l, mid - 1, x);

        return binary_search(arr, mid + 1, r, x);
    }

    return -1;
}
int main()
{
	int mass[] = {-996, -960, -944, -887, -865, -860, -846, -831, -790, -785, -700, -691, -662, -662, -647, 
-640, -587, -532, -524, -519, -501, -497, -475, -471, -461, -457, -452, -442, -441, -416, 
-412, -411, -390, -389, -358, -341, -306, -257, -253, -252, -248, -208, -143, -134, -82, 
-79, -11, 21, 26, 48, 68, 69, 72, 93, 95, 99, 115, 120, 156, 164, 181, 200, 231, 252, 288, 
304, 336, 343, 364, 402, 419, 486, 546, 584, 595, 596, 606, 627, 636, 666, 666, 683, 701, 
740, 766, 780, 782, 794, 802, 829, 832, 837, 858, 875, 881, 882, 883, 883, 947, 959};
	int n = sizeof(mass) / sizeof(mass[0]);
	char des;
	cout << "1 - Line search" << endl << "2 - binar search" << endl;
	cin >> des;
	if (des == '1') 
	{

		int i = line_search(mass, 120, n);
		cout << i;
	}
		if (des == '2') 
	{

		int i = binary_search(mass, 0, n - 1, 120);
		cout << i;
	}
	return 0;
		
}
