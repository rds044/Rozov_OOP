#pragma once
#include <iostream>
	
using namespace std;

template <typename Type>
Type CorrectNumber(Type a, Type b)
{Type x;
while (true) {
	cin >> x;
	if (x < a) || (x > b)
		{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Некорректный ввод.Пожалуйста, введите значение ещё раз : (" << a << "-" << b << "): ";
	
		}	
	return x;

			  }
}

