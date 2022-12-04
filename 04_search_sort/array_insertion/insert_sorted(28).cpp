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
void insert_sorted(int** mass, int w, int n, int pos)
{
    int* m = *mass;
    m = (int*)realloc((int*)m,sizeof(int)*(n+1));
   for(int i = n; i > pos; i--)
   {
       m[i] = m[i-1];
   }
    m[pos] = w;
    *mass = m;
}


int main()
{
        int n = 14;
        
        int* mass = (int*)malloc(sizeof(int)*n);
        for(int i = 0; i < n; i++)
        {
            mass[i] = i;
        }
       
         for(int i = 0; i < n; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        
        cout << "call insert" << endl;
        int  k = search_position(mass, 9, n);
        insert_sorted(&mass, 9, n, k); 
        
        for(int i = 0; i < n+1; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        free(mass);
        
        return 0;
}
