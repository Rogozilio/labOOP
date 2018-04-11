//TODO: Удалить из проекта 1 и 2 лабораторную работу
//TODO: Создать в проекте папки Person, Stack, List, String
//TODO: Переместить третью лабораторную из папки lab3 в папку string, sex перенести в Person
//TODO: Переместить реализацию стека из 4 лабораторной в папку Stack.
//TODO: Удалить все реализации Person, кроме реализации из пятой лабораторной
//TODO: Переместить Person5 (переименованный в Person) в папку Person.
//TODO: Удалить реализацию двусвязного списка из четвертой лабораторной.
//TODO: Переместить реализацию списка из пятой/седьмой лабораторной в папку List
//TODO: Все вспомогательные классы, функции и типы данных переместить в соответствующие папки
//TODO: Удалить ненужные/неактуальные меню лабораторных.
//TODO: Подпапки проекта должны быть созданы как в проекте, так и физически на жестком диске.
#include "lab2/lab2.h"
#include "lab3/lab3.h"
#include "lab4/lab4.h"
#include "lab5/PersonList.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int numberLab;
	bool isMenu = true;
	
	while (isMenu)
	{
		cout << "1)lab1 " << endl;
		cout << "2)lab2 " << endl;
		cout << "3)lab3 " << endl;
		cout << "4)lab4 " << endl;
		cout << "5)lab5 " << endl;
		cout << "6)lab6 " << endl;
		cout << "7)lab7 " << endl;
		cout << "0)Выход " << endl;
		numberLab = CheckSymbol();

		switch (numberLab)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				lab2();
				break;
			}
			case 3:
			{
				lab3();
				break;
			}
			case 4:
			{
				lab4();
				break;
			}
			case 5:
			{
				lab5();
				break;
			}
			case 6:
			{
				lab6();
				break;
			}
			case 7:
			{
				lab7();
				break;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
			default:
			{
				numberLab = CheckSymbol();
				break;
			}
		}
	}
	return 0;
}