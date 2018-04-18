#pragma once
#include <iostream>
#include "../String/String.h"
#include "../Person/Person.h"
#include "../Person/PersonTools.h"
#include "../List/PersonList.h"

void lab5()
{
	PersonList Person1;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Добавление элемента списка" << endl
			<< "2) Вывод списка на экран" << endl
			<< "3) Вернуть указатель по индексу" << endl
			<< "4) Вернуть индекс человека, если он есть в списке" << endl
			<< "5) Удалить человека из списка" << endl
			<< "6) Удалить человека из списка по индексу" << endl
			<< "7) Очистка списка" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();

		switch (key)
		{
		case 1:
		{
			Person* persona = PersonTools::GetRandomPerson(Male);
			Person1.Add(persona);
			cout << persona->GetDescription() << endl;
			cout << "Элемент добавлен успешно" << endl;
			break;
		}
		case 2:
		{
			Person1.Show();
			break;
		}
		case 3:
		{
			int index = 0;
			cout << "Введите индекс: ";
			cin >> index;
			cout << Person1.Find(index) << endl;
			break;
		}
		case 4:
		{
			int index = rand() % Person1.GetCount();
			cout << Person1.IndexOf(Person1.Find(index)) << endl;
			break;
		}
		case 5:
		{
			int index = rand() % (Person1.GetCount() - 1);
			Person1.Remove(Person1.Find(index));
			cout << "Элемент удален" << endl;
			break;
		}
		case 6:
		{
			int index = 0;
			cout << "Введите индекс: ";
			cin >> index;
			Person1.RemoveAt(index);
			cout << "Элемент удален" << endl;
			break;
		}
		case 7:
		{
			Person1.Clear();
			cout << "Очистка завершина" << endl;
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