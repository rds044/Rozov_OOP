#include "Student.h"
#include "utils.h"

int Student::student_max_id = 0;

ostream& operator<<(ostream& os, const Student& student)
{
	os << " Name" << student.name_of_student << endl
		<< "Группу студента" << student.group << endl
		<< "Возраст" << student.age << endl
		<< "Средний рейтинг" << student.average_rating << endl
		<< "Id" << student.Id_of_student << endl;
	return os;
}

istream& operator>>(istream& is, Student& student)
{
	student.Id_of_student = ++student.student_max_id;
	cout << "Введите имя студента";
	cin.ignore(1000, '\n');
	getline(cin, student.name_of_student);
	cout << "Введите группу студента";
	getline(cin, student.group);
	cout << "Введите возраст студента";
	student.age = CorrectNumber(0, 100);
	cout << "Введите средний рейтинг студента";
	student.average_rating = CorrectNumber(0.0, 5.0);
	return is;

}

ofstream& operator<<(ofstream& out, const Student& student)
{
	out << student.Id_of_student << endl
		<< student.name_of_student << endl
		<< student.group << endl
		<< student.age << endl
		<< student.average_rating << endl;
		
	return out;
}

ifstream& operator>>(ifstream& in, Student& student)
{
	in >> student.Id_of_student;
	in.ignore();
	getline(in, student.name_of_student);
	getline(in, student.group);
	in >> student.age;
	in >> student.average_rating;

	return in;
}
int Student::GetID() const
{
	return Id_of_student;
}

void Student::SetID()
{
	Id_of_student = ++student_max_id;
}
