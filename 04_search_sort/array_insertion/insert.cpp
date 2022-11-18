#include <iostream>
using namespace std;
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
        
        mass = insert(mass, 9, n, 5); 
        
        for(int i = 0; i < n+1; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        free(mass);
        return 0;
}

