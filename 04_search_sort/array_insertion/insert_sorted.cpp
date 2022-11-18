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
int* insert(int* mass, int w, int n, int pos)
{
    int* newmass = (int*)malloc(sizeof(int)*(n+1));
    int i = 0;
    while(i<pos)
    {
        newmass[i] = mass[i];
        i++;
    }
    newmass[pos] = w;
    i++;
    while(i<n+1)
    {
        newmass[i] = mass[i-1];
        i++;
    }
    free(mass);
    return newmass;
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
        int k = search_position(mass, 9, n);
        mass = insert(mass, 9, n, k); 
        
        for(int i = 0; i < n+1; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        free(mass);
        return 0;
}

