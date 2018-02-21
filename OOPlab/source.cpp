#include "lab1.h"
//#include <iostream>
//using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Hello World" << endl
			<< "2) Сумма целочисленх переменных " << endl
			<< "3) Деление чисел" << endl
			<< "4) Ввод/Вывод переменных" << endl
			<< "5) Работа с указателем" << endl
			<< "6) четное/нечетное число" << endl
			<< "7) кратность числа" << endl
			<< "8) цикл с пред-условием" << endl
			<< "9) цикл с пост условием" << endl
			<< "10) итерационный цикл" << endl
			<< "11) оператор break" << endl
			<< "12) явное и неявное преобразование" << endl
			<< "0) Выход из программы" << endl
			<< "Введите номер функции для ее выполнения ";
		cin >> key;

		switch (key)
		{
		case 1:
			HelloWorld();
			break;
		case 2:
			sumVariables();
			break;
		case 3:
			divVariables();
			break;
		case 4:
			inputVariables();
			break;
		case 5:
			pointer();
			break;
		case 6:
			evenAndOdd();
			break;
		case 7:
			evenAndOdd2();
			break;
		case 8:
			useWhile();
			break;
		case 9:
			useDoWhile();
			break;
		case 10:
			cycle();
			break;
		case 11:
			cycleEnd();
			break;
		case 12:
			last();
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
	return 0;
}