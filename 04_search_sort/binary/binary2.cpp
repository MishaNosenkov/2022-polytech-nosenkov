#include <iostream>
#include <cassert>
int binary_search(int arr[], int l,int r, int x )
{
while (true)
{
    if (r >= l) 
    {
        int mid = (l+r)/ 2;
 
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            r = mid ;
            
        else l = mid ;
    }
}   
    
    return -1;
}

	int main ()
	{
		int mass[] = {1,2,3,4,5,6,7,8,9,10,11,12,18,20};
		int n = sizeof(mass) / sizeof(mass[1]); 
        assert(binary_search(mass, 0, n, 1) == 0);
        assert(binary_search(mass, 0, n, 2) == 1);
        assert(binary_search(mass, 0, n, 6) == 5);
        assert(binary_search(mass, 0, n, 8) == 7);
        assert(binary_search(mass, 0, n, 18) == 12);
        assert(binary_search(mass, 0, n, 20) == 13);
	}
