#pragma once
#include "Library.h"
class Teacher
{
	string  name;
	string surname;
	int age;
	string gender;
	string kafedra;
public:
	Teacher();
	
	Teacher(string  name, string surname, int age, string gender, string kafedra);
	
	Teacher(const Teacher & obj);
	
	~Teacher();

	friend 


};