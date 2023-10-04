#pragma once
#include "Student.h"
#include "utils.h"
#include <vector>
using namespace std;

class Group{
	protected:
		vector<Student*> group_list;
public:

	

	void InputBook();

	void PrintAllFilms();

}