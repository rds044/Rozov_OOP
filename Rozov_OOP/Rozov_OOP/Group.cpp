#include "utils.h"
#include "Student.h"
#include "Group.h"



void Rozov_Group::Input_student()
{
	Rozov_Student* Varriable_student = new Rozov_Student();
	cin >> *Varriable_student;
	group_list.push_back(Varriable_student);
	//delete Varriable_student;
}

void Rozov_Group::PrintAllStudents()
{
	if (!group_list.empty())
	{
		for (const auto* student : group_list) {
			cout << *student << endl;
		}
	}
	else
		cout << "Нет данных по группе, попробуйте снова" << endl;
}

void Rozov_Group::Save(const std::string& filename)
{
	ofstream fout;
	fout.open(filename);
	if (fout.is_open())
	{
		fout << group_list.size() << endl;
		for (const auto* student: group_list)
			fout << *student;
		fout.close();
	}
	else
		cout << "Произошла ошибка, файл не был открыт. Попробуйте снова!" << endl;
}

void Rozov_Group::Download(string filename)
{
	ifstream fin;
	fin.open(filename);
	if (fin.is_open())
	{
		
		int list_size, id = 1;
			fin >> list_size;

		for (int i = 1; i <= list_size; i++)
		{
			Rozov_Student* Varriable_student = new Rozov_Student();
			fin >> *Varriable_student;
			bool duplicateID = false;
			for (const auto& student : group_list)
			{
				if (student->GetID() == id)
				{
					id++;			
					
							
				}
			}

			if (duplicateID == false)
			{Varriable_student->SetID();
				group_list.push_back(Varriable_student);
			}
			else 
			{	
            delete Varriable_student; // Освобождаем память при дубликате ID
            }
		}
		fin.close();
	}
	else
		cout << "Файл не был открыт! Попробуйте снова!";
}

void Rozov_Group::DeleteAll()
{
	for (const auto* film : group_list)
	{
		delete film;
	}
	group_list.clear();
}