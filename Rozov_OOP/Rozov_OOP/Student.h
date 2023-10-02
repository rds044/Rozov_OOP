#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include "utils.h"
using namespace std;


class Student {

private:
	int Id_of_student;

public:
	Student();
	string name_of_student;
	string group;
	double average_rating;
	int age;
	static int student_max_id;

	friend ostream& operator <<(ostream& os, const Student& student);
	friend istream& operator >>(istream& is, Student& student);
	friend ofstream& operator << (ofstream& out, const Student& student);
	friend ifstream& operator >> (ifstream& in, Student& student);
}
