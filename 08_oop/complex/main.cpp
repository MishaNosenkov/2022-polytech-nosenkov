#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a(12,5);
    Complex b(2,6);
    Complex c(1,5);
    // if(a==b) cout << "a == b " << endl;
    //     else cout << "a != b " << endl;
    // if(a==c) cout << "a == c " << endl;
    //     else cout << "a != c " << endl;
    Complex d = a + b;
    Complex e = b - c;
    cout << "a + b = " << d.re << " " << d.im << endl << "b - c = " << e.re << " " << e.im;
    cout << endl << a.abs();
    return 0;
}
