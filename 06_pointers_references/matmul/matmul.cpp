#include <iostream>
using namespace std;

void matinit(int*** pmat, int m, int n)
{
    *pmat = new int*[m];
    for(int i = 0; i < m; ++i)
    {
        (*pmat)[i] = new int[n];
    }    
}

void matdelete(int*** pmat, int m)
{
    for(int i = 0; i < m; ++i) 
    {
        delete [] (*pmat)[i];
    }
    delete [] *pmat;
}

void matprint(int** a, int m_a, int n_a)
{
    for(int i = 0; i < m_a; i++)
    {
        for (int j = 0; j < n_a; j++)
        {
              cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void matmul(int** a, int m_a, int n_a, int** b, int m_b, int n_b, int** c)
{
    if(n_a != m_b) 
    {
        cout << "Error: Matrix 'A' column number and matrix 'B' rows number must be equal" << endl;
        return;
    }
    for(int i = 0; i < m_a; i++ )
    {
        for(int j = 0; j < n_b; j++)
        {
            for(int k = 0; k < n_a/*m_b*/; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

bool matequal(int** a, int m_a, int n_a, int** b, int m_b, int n_b)
{
    if(m_a != m_b || n_a != n_b) 
    {
        cout << "Error: Matrix 'A' column number and matrix 'B' rows number must be equal:";
        return false;
    }
    for(int i = 0; i < m_a; i++ )
    {
        for(int j = 0; j < n_b; j++)
        {
            if(a[i][j] != b[i][j])
            {
                return false;
            }
        }
    }
    return true;
}



int main()
{
    const int m = 2;
    const int n = 2;
    const int f = 1;

    int **a;
    matinit(&a, m, n);
    a[0][0] = 2;
    a[0][1] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    
    int **b;
    matinit(&b, n, f);
    b[0][0] = 1;
    b[1][0] = 1;
    
    int **c;
    matinit(&c, m, f);
    c[0][0] = 0;
    c[1][0] = 0;
    
    int **d;
    matinit(&d, m, f);
    d[0][0] = 5;
    d[1][0] = 9;
    
    
    matprint(a, m, n);
    matprint(b, n, f);
    matmul(a, m, n, b, n, f, c);
    matprint(c, m, f);

    if(matequal(a, m, n, b, n, f))
    {
        cout << "'A' matrix equal 'B' matrix" << endl;
    }
    else
    {
        cout << "'A' matrix isn't equal 'B' matrix" << endl;
    }

    if(matequal(b, n, f, c, n, f))
    {
        cout << "'B' matrix equal 'C' matrix" << endl;
    }
    else
    {
        cout << "'B' matrix isn't equal 'C' matrix" << endl;
    }
    
    if(matequal(c, n, f, d, n, f))
    {
        cout << "'D' matrix equal 'C' matrix" << endl;
    }
    else
    {
        cout << "'D' matrix isn't equal 'C' matrix" << endl;
    }
    
    
    matdelete(&a, m);
    matdelete(&b, n);
    matdelete(&c, m);
    matdelete(&d, m);

    return 0;
}
