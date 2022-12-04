#include <string>
using namespace std;

class Student
{
public:
    Student(string name);
    ~Student();
    string& GetName();
    void SetMark(int mark);
    int GetMark();
private:
    string name;
    int mark;
};
