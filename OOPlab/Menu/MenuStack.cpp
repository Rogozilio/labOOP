#pragma once
#include <iostream>
#include "../String/String.h"
#include "../Stack/Stack.h"
#include "../List/PersonList.h"
#include "../List/PersonListItem.h"
#include "../Person\PersonTools.h"

void lab4()
{
	Stack* stack = NULL;
	PersonList Person1;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Добавление элемента списка" << endl
			<< "2) Вывод списка на экран" << endl
			<< "3) Вернуть указатель по индексу" << endl
			<< "4) Удаление элемента списка по индексу" << endl
			<< "5) Перемещение элемента person по индексу" << endl
			<< "6) Очистить список" << endl
			<< "------------Работа со стеком-------------" << endl
			<< "7) Добавить элемент в стек (Push)" << endl
			<< "8) Удалить верхний элемент стека (Pop)" << endl
			<< "9) Получить верхний элемент (Top)" << endl
			<< "10) Размер стека (Size)" << endl
			<< "11) Стек пустой? (IsEmpty)" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();
		switch (key)
		{
		case 1:
		{
			Person* persona = PersonTools::GetRandomPerson(Male);
			Person1.Add(persona);
			cout << endl << "Элемент добавлен " << endl << endl;
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
			int index = 0;
			cout << "Введите индекс: ";
			cin >> index;
			Person1.RemoveAt(index);
			cout << "Элемент удален" << endl;
			break;
		}
		case 5:
		{
			/*int index = 0;
			PersonListItem4* newPerson = new PersonListItem4;
			newPerson->Person = MakeRandomPerson();
			cout << "Введите индекс: ";
			cin >> index;
			InsertPerson(newPerson->Person, index, person);*/
			break;
		}
		case 6:
		{
			Person1.Clear();
			cout << endl << "Очистка завершена " << endl << endl;
			break;
		}
		case 7:
		{
			int value;
			cout << "Введите значение: ";
			cin >> value;
			Push(stack, value);
			cout << "+ 1 элемент в стеке" << endl;
			break;
		}
		case 8:
		{
			if (Pop(stack) == -1)
			{
				cout << endl << "Стек пуст" << endl;
			}
			else
			{
				cout << endl << Pop(stack) << endl;
			}
			break;
		}
		case 9:
		{
			if (Top(stack) == -1)
			{
				cout << endl << "Стек пуст" << endl;
			}
			else
			{
				cout << endl << Top(stack) << endl;
			}
			break;
		}
		case 10:
		{
			cout << "Размер стека = " << Size(stack) << endl;
			break;
		}
		case 11:
		{
			if (IsEmpty(stack) == true)
			{
				cout << endl << "Да" << endl;
			}
			else
			{
				cout << endl << "Нет " << endl;
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