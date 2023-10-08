#pragma once
#include "utils.h"
using namespace std;


class Rozov_Student {

private:
	int Id_of_student;

public:
	Rozov_Student();
	string name_of_student;
	string group;
	double average_rating;
	int age;
	static int student_max_id;

	friend ostream& operator <<(ostream& os, const Rozov_Student& student);
	friend istream& operator >>(istream& is, Rozov_Student& student);
	friend ofstream& operator << (ofstream& out, const Rozov_Student& student);
	friend ifstream& operator >> (ifstream& in, Rozov_Student& student);

	int GetID() const;
	void SetID();

};
