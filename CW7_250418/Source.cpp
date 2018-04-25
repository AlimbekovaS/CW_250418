#include"student.h"
#include "Library.h"
int main()
{
	setlocale(LC_ALL, "ru");
	student *s;
	int n;
	ifstream in_file("in.txt");
	in_file>> n;
	s = new student[n];

	for (int i = 0;i < n;i++)
	{
		in_file >> s[i];
	}
	printStudents(s, n);

	cout << ("man" == s[0]) << endl;

	cout << ("man" != s[0]) << endl;

	cout << (s[0] < s[1]) << endl;

	cout << (s[0] > s[1]) << endl;

	system("pause");
	return 0;
}