#include "Student.h"
#include "utils.h"

int Rozov_Student::student_max_id = 0;
;
std::ostream& operator<<(std::ostream& os, const Rozov_Student& student)
{
	   os << "Id студента "  << student.Id_of_student << endl
		<< "Имя студента "  << student.name_of_student << endl
		<< "Группу студента " << student.group << endl
		<< "Возраст студента " << student.age << endl
		<< "Средний рейтинг студента " << student.average_rating << endl;
		
	return os;
};

std::istream& operator>>(std::istream& is, Rozov_Student& student)
{
	student.Id_of_student = ++student.student_max_id;
	cout << "Введите имя студента ";
	cin.ignore(1000, '\n');
	getline(cin, student.name_of_student);
	cout << "Введите группу студента ";
	getline(cin, student.group);
	cout << "Введите возраст студента ";
	student.age = CorrectNumber(0, 100);
	cout << "Введите средний рейтинг студента ";
	student.average_rating = CorrectNumber(0.0, 5.0);
	return is;

};

std::ofstream& operator<<(std::ofstream& out, const Rozov_Student& student)
{
	out << student.Id_of_student << std::endl
		<< student.name_of_student << std::endl
		<< student.group << std::endl
		<< student.age << std::endl
		<< student.average_rating << std::endl;

	return out;
};

std::ifstream& operator>>(std::ifstream& in, Rozov_Student& student)
{
	in >> student.Id_of_student;
	in.ignore();
	getline(in, student.name_of_student);
	getline(in, student.group);
	in >> student.age;
	in >> student.average_rating;

	return in;
};
Rozov_Student::Rozov_Student()
{
}
int Rozov_Student::GetID() const
{
	return Id_of_student;
};

void Rozov_Student::SetID()
{
	Id_of_student = ++student_max_id;
};
