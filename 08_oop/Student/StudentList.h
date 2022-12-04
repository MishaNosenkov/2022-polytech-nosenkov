#include <string>
#include "Student.h"
using namespace std;

class StudentList
{
public:
    StudentList();
    ~StudentList();
    bool AddStudent(string name);
    bool DelStudent(string name);
    bool SetMark(string name, int mark);
    bool GetMark(string name, int &mark);
    float GetMedianMark();
    StudentList& GetBest();
    StudentList& GetWorst();
    void Print();
private:
    Student** students;    
    int NumberOfStudents;
    int NameToIndex(string name);
};
