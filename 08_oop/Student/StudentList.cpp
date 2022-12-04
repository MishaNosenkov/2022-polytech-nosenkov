#include "StudentList.h"
#include <iostream>
#include "stdlib.h"
using namespace std;
StudentList::StudentList()
{
	NumberOfStudents = 0;
	students = NULL;
}

StudentList::~StudentList()
{
    for(int i = 0; i < NumberOfStudents; i++)
    {
        delete students[i]; 
    }
    delete[] students;
}

bool StudentList::AddStudent(string name)
{
    // to do return false
	students = (Student**)realloc((void*)students, (++NumberOfStudents) * sizeof(Student*));
	students[NumberOfStudents - 1] = new Student(name);
	return true;
}

bool StudentList::DelStudent(string name)
{
    if(int i = NameToIndex(name) != -1) 
    {
        delete students[i];  
        for(int j = i + 1; j < NumberOfStudents; j++)
        {
            students[j-1] = students[j];
        }
        students = (Student**)realloc((void*)students, (--NumberOfStudents) * sizeof(Student*));
        return true;
    }
    else
    {
        return false;
    }
}

int StudentList::NameToIndex(string name)
{
	for(int i = 0; i < NumberOfStudents; i++)
	{
	    if(students[i]->GetName() == name) return i;
	}
	return -1;
}

bool StudentList::SetMark(string name, int mark)
{
    int ind = NameToIndex(name);
    if(ind != -1) 
    {
        students[ind]->SetMark(mark);
        return true;
    }
    else
    {
        return false;
    }
}

bool StudentList::GetMark(string name, int &mark)
{
    int ind = NameToIndex(name);
    if(ind != -1) 
    {
        mark = students[ind]->GetMark();
        return true;
    }
    else
    {
        return false;
    }
}
float StudentList::GetMedianMark()
{
    float sum = 0;
    for(int i = 0; i < NumberOfStudents; i++)
    {
        sum += students[i]->GetMark();
    }
    return sum/NumberOfStudents;
}

StudentList& StudentList::GetBest()
{
    StudentList* bList = new StudentList();
    for(int i = 0; i < NumberOfStudents; i++)
    {
        if(students[i]->GetMark() == 5)
        {
            bList->AddStudent(students[i]->GetName());
            bList->SetMark(students[i]->GetName(), 5);
        }
    }
   
    return *bList;
}

void StudentList::Print()
{
    for(int i = 0; i < NumberOfStudents; i++)
    {
        cout << students[i]->GetName() << " " << students[i]->GetMark() << endl;
    }
}

StudentList& StudentList::GetWorst()
{
    StudentList* wList = new StudentList();
    for(int i = 0; i < NumberOfStudents; i++)
    {
        if(students[i]->GetMark() == 2)
        {
            wList->AddStudent(students[i]->GetName());
            wList->SetMark(students[i]->GetName(), students[i]->GetMark());
        }
    }
   
    return *wList;
}