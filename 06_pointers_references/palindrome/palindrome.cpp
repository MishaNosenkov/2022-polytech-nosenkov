#include <iostream>

using namespace std;
bool palindrome(const char* word)
{
    if(word == nullptr) return false;
    int count = 0;
    while(word[count] != 0)
    {
        count++;
    }
    if(count % 2 != 0 || count == 0) return false;
    int j = count; 
    int k = 0;
    for(int i = 0; i < count / 2; i++)
    {
        
        if(word[i] != word[j-1]) return false;
        j--;
        
    }
    return true;
}

int main()
{
   bool b = palindrome("?jkkj?");
    cout << b;
    return 0;
}
