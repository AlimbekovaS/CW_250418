#pragma once
#include"Library.h"


class student
{
	string  name;
	string surname;
	int age;
	string gender;
	int group;

public:
	student();
	student(string name, string surname, int age, string male, int group);
	student(const student &obj);
	
	virtual ~student();

	friend void printStudents(student*ss, int size);
	friend void operator >> (istream& in, student &s);
	friend bool operator==(string male, student obj);
	friend bool operator!=(string male, student obj);
	friend bool operator<(student obj1, student obj2);
	friend bool operator>(student obj1, student obj2);
};
