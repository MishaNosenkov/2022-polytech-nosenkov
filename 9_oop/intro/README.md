Случай без виртуального наследование.
main.cpp: In function ‘int main()’:
main.cpp:74:8: error: request for member ‘name’ is ambiguous
   74 |     ta.name = "Da Sha";
      |        ^~~~
main.cpp:7:17: note: candidates are: ‘std::string Person::name’
    7 |     std::string name{}; 
	.....................................
	Случай с виртуальным наследованием.
	
Person::ctor
Teacher::ctor
Student::ctor
TA::ctor
TA::dtor
Student::dtor
Teacher::dtor
Person::dtor
	