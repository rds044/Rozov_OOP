#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int Student::student_max_id = 0;

ostream& operator<<(ostream& os, const Student& student)
{
	os << " Name" << student.name_of_student << endl
		<< "������ ��������" << student.group << endl
		<< "�������" << student.age << endl
		<< "������� �������" << student.average_rating << endl
		<< "Id" << student.Id_of_student << endl;
	return os;
}

istream& operator>>(istream& is, Student& student)
{
	student.Id_of_student = ++student.student_max_id;
	cout << "������� ��� ��������";
	cin.ignore(1000, '\n');
	getline(cin, student.name_of_student);
	cout << "������� ������ ��������";
	getline(cin, student.group);
	cout << "������� ������� ��������";
	student.age = CorrectNumber(0, 100);
	cout << "������� ������� ������� ��������";
	student.average_rating = CorrectNumber(0.0, 5.0);
	return is;

}

ofstream& operator<<(ofstream& out, const Student& student)
{
	out << student.name_of_student << endl
		<< student.group << endl
		<< student.age << endl
		<< student.average_rating << endl
		<< student.Id_of_student << endl;
	return out;
}

ifstream& operator>>(ifstream& in, Student& student)
{
	
}
