#include <iostream>
#include "StudentList.h"
using namespace std;

int main ()
{
	StudentList students;
	students.AddStudent("Misha");
	students.AddStudent("Sacha");
	students.AddStudent("Vadim");
	students.SetMark("Misha", 5);
	students.SetMark("Sacha", 2);
	students.SetMark("Vadim", 3);
	int mishasmark;
	students.GetMark("Misha", mishasmark);
	//cout << mishasmark;
	float a = students.GetMedianMark();
	cout << "Total List" << endl;
	students.Print();
	cout << endl << "Best of the best" << endl;
	students.GetBest().Print();
	cout << endl << "Worst of the worst" << endl;
	students.GetWorst().Print();
  	return 0;
}

