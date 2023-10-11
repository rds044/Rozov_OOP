#include "Student.h"
#include "utils.h"
#include <string>
 
IMPLEMENT_SERIAL(Rozov_Student, CObject, 0);

 void Rozov_Student::Serialize(CArchive& archive) {
	if (archive.IsStoring()) {
		archive << age << average_rating << name_of_student << group;
	}
	else {
		archive >> age >> average_rating >> name_of_student >> group;
	}
}

void  Rozov_Student::ReadFromConsole()
{
	string str;
	cout << "¬ведите им€ студента ";
	cin >> str;
	name_of_student = str.c_str();
	cout << "¬ведите группу студента ";
	cin >> str;
	group = str.c_str();
	cout << "¬ведите возраст студента ";
	age = CorrectNumber(0, 100);
	cout << "¬ведите средний рейтинг студента ";
	average_rating = CorrectNumber(0.0, 5.0);
	
};

void Rozov_Student::WriteToConsole() {
	cout << name_of_student << endl << group << endl << age << average_rating << endl;
									 }


Rozov_Student::Rozov_Student()
{
}


