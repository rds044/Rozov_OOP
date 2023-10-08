#include <iostream>
#include "utils.h"
#include "Student.h"
#include "Group.h"
#include <Windows.h>
#include <string>



void PrintMenu()
	{
		std::cout << " 1. Добавить студента " << std::endl
			<< " 2. Вывести на экран всех студентов " << std::endl
			<< " 3. Сохранить список группы в файл " << std::endl
			<< " 4. Скачать данные из файла " << std::endl
			<< " 5. Удалить всех студентов " << std::endl
			<< " 0. Выйти " << std::endl
			<< " Выберите действие: ";
	}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Rozov_Student film;
	Rozov_Group group_list;
	while (1)
	{
		system("cls");
		PrintMenu();

		switch (CorrectNumber(0, 5))
		{
		case 1:
		{
			group_list.Input_student();
			break;
		}
		case 2:
		{
			group_list.PrintAllStudents();
			break;
		}
		case 3:
		{
			cout << "Введите название файла: ";
			string filename;
			cin >> ws;
			getline(cin, filename);
			group_list.Save(filename);
			break;
		}
		case 4:
		{
			cout << "Введите название файла: ";
			string filename;
			cin >> ws;
			getline(cin, filename);
			group_list.Download(filename);
			break;
		}
		case 5:
		{
			group_list.DeleteAll();
			break;
		}
		case 0:
		{
			return 0;
		}
		default:
		{
			cout << "Произошла ошибка. Попробуйте снова!" << endl;
		}

		}
		system("pause");
	}

}