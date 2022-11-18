#include <cassert>
unsigned int length(const char* str)
{
    int i = 0;
  while (true)
  {
      if(str[i] == 0) return i;
      i++;
  }
}

int main()
{
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);
    return 0;
}

