#pragma once
#include <iostream>
using namespace std;

inline void HelloWorld()
{
	cout << endl << "Hello, World!" << endl << endl;
}

inline void sumVariables()
{
	int a; // Объявление целочисленной переменной
	a = 5; // Инициализация переменной значением
	int b = 3; // Допустимо одновременное объявление и инициализация
	cout << "Variable a equals = " << a << endl; // Вывод значения переменной на экран
	cout << "Variable b equals = " << b << endl; // Значение переменной подставится вместо
	cout << "Summ of a and b equals = " << a+b << endl; // Можно выводить сразу
}

inline void divVariables()
{
	int a = 5;
	int b = 3;
	float z = 5.0;
	float y = 3.0;
	cout << "Float variables division:" << endl << z / y << endl << endl;
	cout << "Integer variables division:" << endl << a / b << endl << endl;
}

inline void inputVariables()
{
	int a;
	int b;
	// Вывод текстового сообщения, поясняющего назначение программы
	// является правилом хорошего тона и помогает пользователю
	// разобраться в вашей программе
	cout << "---Program for integer summation---";
	// Всегда поясняйте пользователю, какие данные ему нужно ввести
	cout << endl << "Enter first integer value: ";
	cin >> a; // Чтение значения переменной с клавиатуры
	cout << endl << "Enter second integer value: ";
	cin >> b;
	cout << endl <<"Summ of a and b equals" << endl <<  a << " + " <<  b << " = " <<  a + b << endl;
}

inline void pointer()
{
	int value;
	int* pointer; // Объявление указателя на целочисленный тип данных
	int anotherValue;
	value = 5;
	pointer = &value; // Операция взятия адреса переменной
					  // pointer может хранить адрес только
					  // целочисленной переменной
	anotherValue = *pointer; // Операция разыменования
							 // Вывод значения, полученного при разыменовании указателя
	cout << "Value, stored in pointer: " << endl << anotherValue << endl;
	// Вывод адреса, который хранится в указателе
	cout << "Address in pointer: " << endl << pointer << endl;
	// Вывод результата разыменования указателя
	cout << "Value in pointer: " << endl << *pointer << endl;
}

inline void evenAndOdd()
{
	int a;
	cout << "Enter value for check on even/odd: ";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << endl << "Value is even!" << endl << a << endl;
	}
	else
	{
		cout << endl << "Value is odd!" << endl << a << endl;
	}
}

inline void evenAndOdd2()
{
	int a;
	cout << "Enter value for check on even/odd: ";
	cin >> a;
	if (a % 5 == 0)
	{
		cout << endl << "Value multiples 5!" << endl << a << endl;
	}
	else if (a % 2 == 0)
	{
		cout << endl << "Value multiples 2!" << endl << a << endl;
	}
	else
	{
		cout << "Value doesn`t multiply 5 or 2!" << endl << a << endl;
	}
}

inline void useWhile()
{
	int a = 0;
	while (a < 5) // условный цикл с пред-условием
	{
		cout << "Value is now = " << a << endl;
		a++;
	}

}

inline void useDoWhile()
{
	int a = 0;
	do // условный цикл с пост-условием
	{
		cout << "Value is now = " << a << endl;
		a++;
	} while (a < 5);
}

inline void cycle()
{
	int a = 10;
	for (int i = 0; i < 10; i++)
	{
		cout << "Iteration" << i << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < a; i++)
	{
		a--;
		cout << "Iteration Value" << endl << i << ' ' <<  a << endl;
	}
}

inline void cycleEnd()
{
	int a = 10;
	for (int i = 0; i < 10; i++)
	{
		a--;
		if (i >= a)
		{
			cout << "I is more or equal A! Break of cycle" << endl;
			break; // этот оператор досрочно завершает цикл
		}
	}
	cout << endl << "A is " << a << endl;
}

inline void last()
{
	int a = 5;
	int b = 3;
	float z;
	// Неявное приведение типов
	z = a;
	cout <<  "Value of z is " << z << endl;
	// Ошибка - невозможное приведение типов!
	a = z;
	// Явное приведение типов
	a = (int)z;
	cout << "Value of a is " << a << endl;
	// Неявное приведение результата деления
	// целочисленных переменных
	z = a / b;
	cout << "Value of z is " << z << endl;
	// Явное приведение а к float и неявное b к float
	// для выполнения деления
	z = ((float)a) / b;
	cout << "Value of z is " << z << endl;
}

