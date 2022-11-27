#include <iostream>
using namespace std;
void insert(int** mass, int w, int n, int pos)
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
        
        insert(&mass, 9, n, 5); 
        
        for(int i = 0; i < n+1; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        free(mass);
       
        cout << "free array" << endl;
        mass = nullptr;
        insert(&mass, 9, 0, 0); 
        
        cout << "call insert again" << endl;
        
        for(int i = 0; i < 1; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        
        insert(&mass, 4, 1, 1); 
        
        cout << "call insert again x2" << endl;
        
        for(int i = 0; i < 2; i++)
        {
            cout << mass[i] << " ";    
        }
        cout << endl;
        
        
        return 0;
}
