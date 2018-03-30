#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <Windows.h>
#include "lab2/lab2.h"
#include "lab3/lab3.h"
#include "lab3/MenuEnum.h"
#include "lab3/Person.h"
#include "lab4/lab4.h"
#include "lab4/PersonList4.h"
#include "lab4/Stack.h"
#include "lab5/PersonList.h"
#include "lab5/PersonListItem.h"
#include "lab5/Person5.h"
#include "lab5/PersonTools.h"

using namespace std;

void lab2()
{
	srand(time(NULL));
	int key;
	bool isMenu = true;
	while (isMenu)
	{

		cout << "1) Hello World " << endl
			<< "2) Калькулятор " << endl
			<< "3) Корень квадратного уравнения (указатели) " << endl
			<< "4) Корень квадратного уравнения (ссылки)" << endl
			<< "5) Перегрузка функций" << endl
			<< "6) Глобальные переменные" << endl
			<< "7) Возведение числа в степень" << endl
			<< "8) Угадай целое число" << endl
			<< "9) Сортировка массива" << endl
			<< "10) Перемножение матриц" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
			{
				PrintHelloWorld();
				break;
			}
			case 2:
			{
				int value1;
				int value2;
				char operationKey;

				cout << "Введите первый операнд: ";
				cin >> value1;

				cout << "Введите второй операнд: ";
				cin >> value2;

				do 
				{
					cout << "Введите оператор: ";
					cin >> operationKey;
				} while ((operationKey != '+') && (operationKey != '-') && 
					(operationKey != '*') && (operationKey != '/') && 
					(operationKey != '%'));
				cout << MakeCalculation(value1, value2, operationKey) << endl;
				break;
			}
			case 3:
			{
				double x1;
				double x2;
				double *x1Pointer = &x1;
				double *x2Pointer = &x2;

				cout << "Аргументы квадратного уравнения: а = 1, b = 3, c = 2 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsPointer(1, 3, 2, x1Pointer, x2Pointer) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 1, b = 4, c = 0 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsPointer(1, 4, 0, x1Pointer, x2Pointer) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 0, b = 1, c = 2 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsPointer(0, 1, 2, x1Pointer, x2Pointer) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 0, b = 0, c = 3 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsPointer(0, 0, 3, x1Pointer, x2Pointer) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 0, b = 1, c = 0 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsPointer(0, 1, 0, x1Pointer, x2Pointer) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 4, b = 1, c = 4 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsPointer(4, 1, 4, x1Pointer, x2Pointer) << endl << endl;
				break;
			}
			case 4:
			{
				double x1;
				double x2;

				cout << "Аргументы квадратного уравнения: а = 1, b = 3, c = 2 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsLink(1, 3, 2, x1, x2) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 1, b = 4, c = 0 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsLink(1, 4, 0, x1, x2) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 0, b = 1, c = 2 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsLink(0, 1, 2, x1, x2) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 0, b = 0, c = 3 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsLink(0, 0, 3, x1, x2) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 0, b = 1, c = 0 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsLink(0, 1, 0, x1, x2) << endl << endl;

				cout << "Аргументы квадратного уравнения: а = 4, b = 1, c = 4 " << endl;
				cout << "Количество корней квадратного уравнения = " << GetRootsLink(4, 1, 4, x1, x2) << endl << endl;
				break;
			}
			case 5:
			{
				int a = 1;
				int b = 2;
				SummNumbers(a, b);
				double x = 3.0;
				double y = 4.0;
				SummNumbers(x, y);
				SummNumbers(a, y);
				float m = 5.0;
				float n = 6.0;
				SummNumbers(m, n);
				break;
			}
			case 6:
			{
				cout << "Global Variable: " << globalVariable << endl;
				GlobalPlusTwo();
				cout << "Global Variable: " << globalVariable << endl;
				GlobalMultiplyThree();
				cout << "Global Variable: " << globalVariable << endl;
				GlobalEqualsOne();
				cout << "Global Variable: " << globalVariable << endl;
				globalVariable = 5;
				cout << "Global Variable: " << globalVariable << endl;
				break;
			}
			case 7:
			{
				int base;
				int power;
				cout << "Введите целое число: ";
				cin >> base;
				cout << "Введите степень в которую хотите возвести данное число: ";
				cin >> power;
				cout << "Результат = " << GetPower(base, power) << endl;
			}
			case 8:
			{
				int guessNumber = rand() % 10; // генерация угадываемого числа
				int enteredNumber = -1; // вводимое пользователем число
				int shots = 3; // количество попыток
				cout << "Компьютер загадал число от 0 до 10! ";
				GuessRandomNumber(guessNumber, enteredNumber, shots);
			}
			case 9:
			{
				const int arraySize = 10;
				int array[arraySize];

				for (int i = 0; i < arraySize; i++)				{					array[i] = rand() % 20;				}

				cout << "Первый способ сортировки: " << endl;
				ArraySorting1(array);
				cout << "Второй способ сортировки: " << endl;
				ArraySorting2(array, arraySize);
				cout << "Третий способ сортировки: " << endl;
				ArraySorting3(array, arraySize);
			}
			case 10:
			{
				int matrSize1;
				int matrSize2;
				int matrSize3;

				cout << "Введите длину первой матрицы: ";
				cin >> matrSize1;
				cout << "Введите ширину первой матрицы и длину второй матрицы: ";
				cin >> matrSize2;
				cout << "Введите ширину второй матрицы: ";
				cin >> matrSize3;

				int **matr1 = new int *[matrSize1];
				int **matr2 = new int *[matrSize2];

				for (int i = 0; i < matrSize1; i++)
				{
					matr1[i] = new int[matrSize2];
				}
				for (int i = 0; i < matrSize2; i++)
				{
					matr2[i] = new int[matrSize3];
				}

				cout << "Вывод первой матрицы: " << endl;
				for (int i = 0; i < matrSize1; i++)
				{
					for (int j = 0; j < matrSize2; j++)
					{
						matr1[i][j] = rand() % 10;
						cout << matr1[i][j] << ' ';
					}
					cout << endl;
				}
				cout << "Вывод второй матрицы: " << endl;
				for (int i = 0; i < matrSize2; i++)
				{
					for (int j = 0; j < matrSize3; j++)
					{
						matr2[i][j] = rand() % 10;
						cout << matr2[i][j] << ' ';
					}
					cout << endl;
				}

				MultiplyMatrices(matr1, matr2, matrSize1, matrSize2, matrSize3);

				for (int i = 0; i < matrSize1; i++)
				{
					delete matr1[i];
				}
				for (int i = 0; i < matrSize2; i++)
				{
					delete matr2[i];
				}
				delete [] matr1;
				delete [] matr2;
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
	PersonList4* person = new PersonList4;
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
				AddPerson(person, MakeRandomPerson());
				cout << endl << "Элемент добавлен " << endl << endl;
				break;
			}
			case 2:
			{
				ShowList(person->Head);
				break;
			}
			case 3:
			{
				int index = 0;
				PersonLab4* newPerson = new PersonLab4;
				cout << "Введите индекс: ";
				cin >> index;
				newPerson = Get(index, person);
				cout << endl << newPerson << endl;
				break;
			}
			case 4:
			{
				int index = 0;
				cout << "Введите индекс: ";
				cin >> index;
				RemovePerson(index, person);
				break;
			}
			case 5:
			{
				int index = 0;
				PersonListItem4* newPerson = new PersonListItem4;
				newPerson->Person = MakeRandomPerson();
				cout << "Введите индекс: ";
				cin >> index;
				InsertPerson(newPerson->Person, index, person);
				break;
			}
			case 6:
			{
				Clear(person);
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
			Person5 persona = PersonTools::GetRandomPerson();
			Person1.Add(&persona);
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