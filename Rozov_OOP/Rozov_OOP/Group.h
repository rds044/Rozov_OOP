#pragma once
#include "Student.h"

#include <vector>
using namespace std;

class Rozov_Group{
private:
	vector<Rozov_Student*> group_list;
public:

	void Input_student();

	void PrintAllStudents();

	void Save(const std::string& filename);

	void Download(std::string filename);

	void DeleteAll();
};
