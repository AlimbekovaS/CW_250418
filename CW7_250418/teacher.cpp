#include"Library.h"
#include"Teacher.h"


Teacher::Teacher()
{
	name = "";
	surname = "";
	age = 0;
	gender = "";
	kafedra = "";
};

Teacher::Teacher(string  name, string surname, int age, string gender, string kafedra)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->gender = gender;
	this->kafedra = kafedra;
}

Teacher::Teacher(const Teacher & obj)
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->age = obj.age;
	this->gender = obj.gender;
	this->kafedra = obj.kafedra;
}

Teacher::~Teacher(){}

