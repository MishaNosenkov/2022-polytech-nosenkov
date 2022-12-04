#include <iostream>
using namespace std;
struct Person
{
    Person();
    ~Person();
    std::string name{};
};

Person::Person()
{
    cout << "Person::ctor" << endl;    
}

Person::~Person()
{
    cout << "Person::dtor" << endl;    
}

struct Student: virtual public Person
{
    
    Student();
    ~Student();
    int score{};
};

Student::Student()
{
    cout << "Student::ctor" << endl;  
}

Student::~Student()
{
    cout << "Student::dtor" << endl;  
}

struct Teacher: virtual public Person
{
    Teacher();
    ~Teacher();
};

Teacher::Teacher()
{
    cout << "Teacher::ctor" << endl;
}

Teacher::~Teacher()
{
    cout << "Teacher::dtor" << endl;
}

struct TA: Teacher, Student
{
    TA();
    ~TA();
};

TA::TA()
{
    cout << "TA::ctor" << endl;
}

TA::~TA()
{
    cout << "TA::dtor" << endl;
}

int main()
{
    TA ta;
    ta.score = 5.0;
    ta.name = "Da Sha";

    return 0;
}