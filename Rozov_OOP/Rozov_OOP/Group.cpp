#include "utils.h"
#include "Student.h"
#include "Group.h"


void Group::InputBook()
{
	Student Varriable_student;
	cin >> Varriable_student;
	group_list.push_back(new Group(Varriable_student));
}

void Group::PrintAllFilms()
{
	if (grouз_list.size() != 0)
	{
		for (const auto* film : grou_list)
			cout << *film << endl;
	}
	else
		cout << "Нет данных по группе, попробуйте снова" << endl;
}

void Group::Save(const std::string& filename)
{
	ofstream fout;
	fout.open(filename);
	if (fout.is_open())
	{
		fout << film_list.size() << endl;
		for (const auto* film : film_list)
			fout << *film;
		fout.close();
	}
	else
		cout << "Произошла ошибка, файл не был открыт. Попробуйте снова!" << endl;
}

void Group::Download(std::string filename)
{
	ifstream fin;
	fin.open(filename);
	if (fin.is_open())
	{
		Kamalova_film film;
		int list_size, id = 1,
			fin >> list_size;

		for (int i = 1; i <= list_size; i++)
		{
			fin >> film;
			for (auto& f : film_list)
			{
				if (film.GetID() == id)
				{
					kol++;
					id++;
				}
			}
			if (kol == 0)
			{
				film.MaxID++;
				film_list.push_back(new Kamalova_film(film));
			}

		}
		fin.close();
	}
	else
		cout << "Файл не был открыт! Попробуйте снова!";
}

void Group::DeleteAll()
{
	for (const auto* film : film_list)
	{
		delete film;
	}
	film_list.clear();
}