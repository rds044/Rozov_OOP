#pragma once
#include "utils.h"
#include <afx.h>
#include <cstring>
using namespace std;
//#pragma region MFC 

class Rozov_Student : public CObject {

	protected:
	
	int age;
	float average_rating;
	CString name_of_student;
	CString group;

	public:
	DECLARE_SERIAL(Rozov_Student);
	void ReadFromConsole();
	void WriteToConsole();

	Rozov_Student();
	void Serialize(CArchive& archive);
		

};
