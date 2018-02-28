#include "lab1\lab1.h"
#include <iostream>
#include <string>
using namespace std;

int CheckSymbol()
{
	string n;
	int m;
	do
	{
		cin >> n;
		if (n == "0") { return 0; }
		m = atoi(n.c_str());
	} while (m == 0);
	return m;
}

void main()
{
	setlocale(LC_ALL, "rus");
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Hello World" << endl
			<< "2) Сумма целочисленных переменных " << endl
			<< "3) Деление чисел" << endl
			<< "4) Ввод/Вывод переменных" << endl
			<< "5) Работа с указателем" << endl
			<< "6) Четное/Нечетное число" << endl
			<< "7) Кратность числа" << endl
			<< "8) Цикл с пред-условием" << endl
			<< "9) Цикл с пост-условием" << endl
			<< "10) Итерационный цикл" << endl
			<< "11) Оператор break" << endl
			<< "12) Явное и неявное преобразование" << endl
			<< "0) Выход из программы" << endl
			<< "Введите номер функции для ее выполнения ";
		key = CheckSymbol();

		switch (key)
		{
		case 1:
			HelloWorld();
			break;
		case 2:
			SumVariables();
			break;
		case 3:
			DivVariables();
			break;
		case 4:
			InputVariables();
			break;
		case 5:
			Pointer();
			break;
		case 6:
			EvenAndOdd();
			break;
		case 7:
			EvenAndOdd2();
			break;
		case 8:
			UseWhile();
			break;
		case 9:
			UseDoWhile();
			break;
		case 10:
			Cycle();
			break;
		case 11:
			CycleEnd();
			break;
		case 12:
			ExplicitType();
			break;
		case 0:
			isMenu = false;
			break;
		default:
			cout << "Повторите ввод  ";
			break;
		}
	}
	system ("pause");
}