#pragma once
#include <iostream>
#include "../String/String.h"
#include "../Person/Person.h"
#include "../Person/PersonTools.h"
#include "../Person/Adult.h"
#include "../Person/Child.h"

void lab6()
{
	Person* persona;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Добавление элемента списка и вывод на экран" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();

		switch (key)
		{
		case 1:
		{
			int countPerson;
			cout << "Введите количество персон для создания: ";
			cin >> countPerson;
			while (countPerson != 0)
			{
				if (rand() % 2)
				{
					cout << endl << "This is a child" << endl;
					// TODO: это не демонстрация полиморфизма.
					// Полиморфизм это работа с объектами через общий интерфейс (базовый класс)
					// исправлено
					Child* child = PersonTools::GetRandomChild(Male);
					persona = child;
					cout << persona->GetDescription() << endl;
					delete child;
				}
				else
				{
					cout << endl << "This is an adult" << endl;
					// TODO: это не демонстрация полиморфизма.
					// Полиморфизм это работа с объектами через общий интерфейс (базовый класс)
					// исправлено
					Adult* adult = PersonTools::GetRandomAdult(Male);
					persona = adult;
					cout << persona->GetDescription() << endl;
					delete adult;
				}
				countPerson--;
			}
			break;
		}
		case 0:
		{
			isMenu = false;
			break;
		}
		default:
		{
			cout << "Повторите ввод  ";
			break;
		}
		}
	}
}