#include "Student.h"

Student::Student(string name)
{
    this->name = name;
}

Student::~Student()
{
    
}

void Student::SetMark(int mark)
{
    this->mark = mark;
}

int Student::GetMark()
{
	return mark;
}

string& Student::GetName()
{
    return name;
}
