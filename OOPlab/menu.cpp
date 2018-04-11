#pragma once
// TODO: слишком большой файл - неудобно работать.
// Разделить на отдельные файлы для каждой лабораторной работы.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <Windows.h>
#include "String/String.h"
#include "String/MenuEnum.h"
#include "Stack/Stack.h"
#include "List/PersonList.h"
#include "List/PersonListItem.h"
#include "Person/Person.h"
#include "Person/PersonTools.h"
#include "Person/Adult.h"
#include "Person/Child.h"
#include "List/TemplateList.h"
#include "List/TemplateListItem.h"
#include "List/TemplateList.cpp"

using namespace std;

void lab3()
{
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Определить длину строки" << endl
			<< "2) Объединение двух строк" << endl
			<< "3) Вернуть подстроку" << endl
			<< "4) Поиск подстроки" << endl
			<< "5) Перевод строки в верхний регистр" << endl
			<< "6) Перевод строки в нижний регистр" << endl
			<< "7) Разделение исходной строки на path, name и extension" << endl
			<< "8) Заменить табуляцию на пробелы" << endl
			<< "9) Заменить пробелы на табуляцию" << endl
			<< "10) Ввод и вывод данных структуры Person" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case GetLengthEnum:
			{
				char string[] = { "" };
				cout << "Введите строку: ";
				cin.ignore();
				cin.getline(string, 256);
				cout << "Длина строки = " << GetLengthString(string) << endl;
				break;
			}
			case ConcatenateEnum:
			{
				char string1[] = { "" };
				char string2[] = { "" };

				cout << "Введите первую строку: ";
				cin.ignore();
				cin.getline(string1, 256);
				cout << "Введите вторую строку: ";
				cin.getline(string2, 256);
				char* string3 = Concatenate(string1, string2);
				cout << string3 << endl;
				delete[] string3;
				//TODO: Здесь и далее вызываемые функции создают строки динамически, но память нигде не освобождается. Исправить!
				//?
				break;
			}
			case GetSubstringEnum:
			{
				char string[] = { "Hello, World!" };
				char* newString;

				if (GetSubstring(string, 2, 4) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, 2, 4);
					cout << newString << endl;
				}

				if (GetSubstring(string, -3, 3) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, -3, 3);
					cout << newString << endl;
				}

				if (GetSubstring(string, 2, -4) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, 2, -4);
					cout << newString << endl;
				}

				if (GetSubstring(string, 7, 8) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, 7, 8);
					cout << newString << endl;
				}
				delete[] newString;
				break;
			}
			case FindSubstringEnum:
			{
				cout << FindSubstring("Lorem ipsum aset amet", "ipsum a") << endl;
				cout << FindSubstring("Lorem ipsum aset amet", "Arom") << endl;
				cout << FindSubstring("Lorem ipsum aset ametsum", "sum") << endl;
				break;
			}
			case UppercaseEnum:
			{
				cout << "Исходная строка: Different cases in That string, also 1 and 2 numbers!" << endl;
				cout << "Результат: " << Uppercase("Different cases in That string, also 1 and 2 numbers!") << endl;
				break;
			}
			case LowercaseEnum:
			{
				cout << "Исходная строка: Different cases in That string, also 1 and 2 numbers!" << endl;
				cout << "Результат: " << Lowercase("Different cases in That string, also 1 and 2 numbers!") << endl;
				break;
			}
			case SplitFilenameEnum:
			{
				char path[100];
				char name[100];
				char extension[100];
				SplitFilenamePrint( SplitFilename("d:\\folder\\file.exe", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("d:\\folder\\subfolder\\file.exe", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("d:\\folder\\subfolder\\file", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("file.txt", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("d:\\folder\\.exe", path, name, extension), path, name, extension);
				break;
			}
			case ReplaceTabsOnSpacesEnum:
			{
				cout << ReplaceTabsOnSpaces("Cake\tis\ta lie!", 4) << endl;
				cout << ReplaceTabsOnSpaces("Cake\t\tis a lie!", 4) << endl;
				cout << ReplaceTabsOnSpaces("\tCake is \tlie!", 4) << endl;
				break;
			}
			case ReplaceSpacesOnTabsEnum:
			{
				cout << ReplaceSpacesOnTabs("Cake::::is::a:lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake::::is::::a:lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake:is:a:::::::lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake:is::a:lie!", 4) << endl;
				break;
			}
			case 10:
			{
				Person person1 = ReadPerson();
				PrintPerson(person1);
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

void lab4()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Stack* stack = NULL;
	PersonList Person1;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
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
		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
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

void lab6()
{
	PersonList Person1;
	//Блок кода, тестирующий полиморфизм
	{
		Person* person;
		auto adult = new Adult;
		adult->Age = 30;
		adult->Name = "adult";
		adult->Surname = "adult";
		adult->MarriedOn = PersonTools::GetRandomPerson(Male);
		person = adult;
		// Через указатель на базовый класс вызывается 
		// реализация метода GetDescription() базового класса, а не дочернего.
		// Это означает, что полиморфизм не работает
		cout << person->GetDescription() << endl;
		auto child = new Child;
		child->Age = 10;
		child->Name = "Child";
		child->Surname = "Child";
		child->Father = adult->MarriedOn;
		child->Mother = adult;
		person = child;
		// Через указатель на базовый класс вызывается 
		// реализация метода GetDescription() базового класса, а не дочернего.
		// Это означает, что полиморфизм не работает
		cout << person->GetDescription() << endl;
	}
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
						Child* child = PersonTools::GetRandomChild(Male);
						cout << child->GetDescription() << endl;
						delete child;
					}
					else
					{
						cout << endl << "This is an adult" << endl;
						// TODO: это не демонстрация полиморфизма.
						// Полиморфизм это работа с объектами через общий интерфейс (базовый класс)
						Adult* adult = PersonTools::GetRandomAdult(Male);
						cout << adult->GetDescription() << endl;
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

void lab7()
{
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Демонстрировать на double" << endl
			<< "2) Демонстрировать на *Person" << endl
			<< "3) Демонстрировать на double[5]" << endl
			<< "4) Демонстрировать на List<double>" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
			{
				double* value = new double;
				TemplateList<double> Person;
				*value = 1.11;
				Person.Add(value);
				*value = 2.22;
				Person.Add(value);
				*value = 3.33;
				Person.Add(value);
				*value = 4.44;
				Person.Add(value);
				*value = 5.55;
				Person.Add(value);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				*value = 6.66;
				Person.Insert(value, 3);
				Person.Show();
				delete value;
				break;
			}
			case 2:
			{
				TemplateList<Person> Person;
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Add(PersonTools::GetRandomPerson(Female));
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Add(PersonTools::GetRandomPerson(Female));
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.ShowPerson();
				Person.RemoveAt(2);
				Person.ShowPerson();
				Person.Insert(PersonTools::GetRandomPerson(Male), 3);
				Person.ShowPerson();
				break;
			}
			case 3:
			{
				/*double* value = new double[5];
				TemplateList<double[5]> Person;
				value[0] = 1.11;
				Person.Add(value[1]);
				value[0] = 2.22;
				Person.Add(value[1]);
				value[0] = 3.33;
				Person.Add(value[1]);
				value[0] = 4.44;
				Person.Add(value[1]);
				value[0] = 5.55;
				Person.Add(value[1]);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				value[0] = 6.66;
				Person.Insert(value[1], 3);
				Person.Show();
				delete value;*/
				break;
			}
			case 4:
			{
				/*double* value = new double;
				TemplateList<TemplateList<double>> Person;
				*value = 1.11;
				Person.Add(value);
				*value = 2.22;
				Person.Add(value);
				*value = 3.33;
				Person.Add(value);
				*value = 4.44;
				Person.Add(value);
				*value = 5.55;
				Person.Add(value);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				*value = 6.66;
				Person.Insert(value, 3);
				Person.Show();
				delete value;*/
				break;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
		}
	}
}