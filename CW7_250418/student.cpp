#include"student.h"
#include "Library.h"
student::student()
{
	name = "";
	surname = "";
	age = 0;
	gender = "";
	group = 0;
}

student::student(string name, string surname, int age, string male, int group)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->group = group;
}

student::student(const student &obj) // konstr kopirovania
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->group = obj.group;
}

student::~student()
{

}
void printStudents(student*ss, int size)
{
	for (int i = 0; i < size;i++)
		cout << ss[i].name << "\t" << ss[i].surname << "\t" << ss[i].age << "\t" << ss[i].gender  << "\t" << ss[i].group<<"\n";
	
}
void operator >> (istream& in, student& s)
{
	string str;
	getline(in, str, '\n');
	getline(in, s.name, '#');
	getline(in, s.surname, '#');
	in >> s.age >> s.gender >> s.group;
	
}

bool operator==(string male, student obj)
{
	return (male == obj.gender);
}

bool operator!=(string male, student obj)
{
	return (male != obj.gender);
}

bool operator<(student obj1, student obj2)
{
	return (obj1.age < obj2.age);
}
bool operator>(student obj1, student obj2)
{
	return (obj1.age > obj2.age);
}