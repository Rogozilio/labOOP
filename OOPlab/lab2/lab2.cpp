#pragma once
#include <iostream>
#include "lab2.h"

using namespace std;

int globalVariable = 7;

//Вывод на экран Hello world
void PrintHelloWorld()
{
	cout << "Hello, World!" << endl;
}

//Калькулятор
double MakeCalculation(int value1, int value2, char operationKey)
{
	switch (operationKey)
	{
		case '+':
			return value1 + value2;
		case '-':
			return value1 - value2;
		case '*':
			return value1 * value2;
		case '/':
			return value1 / value2;
		case '%':
			return value1 % value2;
	}
}

//Нахождение корней квадратного уравнения (с помощью указателя)
int GetRootsPointer(int a, int b, int c, double* x1, double* x2)
{
	int D = b * b - 4 * a * c;
	if (a == 0 && b != 0)
	{
		*x1 = -c / b;
		cout << "Корни квадратного уравнения = " << *x1 << endl;
		return 1;
	}
	else if (D > 0)
	{
		*x1 = (-b - sqrt(D)) / (2 * a);
		*x2 = (-b + sqrt(D)) / (2 * a);
		cout << "Корни квадратного уравнения = " << *x1 << " " << *x2 << endl;
		return 2;
	}
	else if (D == 0 && a != 0 && b != 0)
	{
		*x1 = (-b + sqrt(D)) / (2 * a);
		cout << "Корни квадратного уравнения = " << *x1 << endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

//Нахождение корней квадратного уравнения (с помощью адресса)
int GetRootsLink(int a, int b, int c, double& x1, double& x2)
{
	int D = b * b - 4 * a * c;
	if (a == 0 && b != 0)
	{
		x1 = -c / b;
		cout << "Корни квадратного уравнения = " << x1 << endl;
		return 1;
	}
	else if (D > 0)
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		cout << "Корни квадратного уравнения = " << x1 << " " << x2 << endl;
		return 2;
	}
	else if (D == 0 && a != 0 && b != 0)
	{
		x1 = (-b + sqrt(D) / (2 * a));
		cout << "Корни квадратного уравнения = " << x1 << endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

//Рассчитать сумму двух целочисленных переменных
void SummNumbers(int value1, int value2)
{
	cout << "Summ of integer is " <<  value1 + value2 << endl;
}

//Рассчитать сумму двух целочисленных переменных
void SummNumbers(double value1, double value2)
{
	cout << "Summ of double is " << value1 + value2 << endl;
}

//Рассчитать сумму двух целочисленных переменных
void SummNumbers(int value1, double value2)
{
	cout << "Summ of integer and double is " << value1 + value2 << endl << endl;
}

//Функции демонстрирующие использование глобальных переменных(+ 2 к глобальной переменной)
void GlobalPlusTwo()
{
	globalVariable += 2;
}

//Функции демонстрирующие использование глобальных переменных(* 3 глобальную переменную)
void GlobalMultiplyThree()
{
	globalVariable *= 3;
}

//Функции демонстрирующие использование глобальных переменных(присваивание 1 к глобальной переменной)
void GlobalEqualsOne()
{
	globalVariable = 1;
}

//Функция возводит число base в степень power
int GetPower(int base, int power)
{
	return power != 0 
		? base * GetPower(base, power - 1) 
		: 1;
}

//Игра - угадай число
int GuessRandomNumber(int guessNumber, int enteredNumber, int shots)
{
	for (; shots != 0; shots--)
	{
		cout << endl << "У вас " << shots << " попытки, чтобы отгадать число " << endl;
		cout << "Введите число: ";
		cin >> enteredNumber;
		if (enteredNumber == guessNumber)
		{
			cout << "Вам удалось угадать число =)" << endl;
			return 0;
		}
		else if (enteredNumber > guessNumber)
		{
			cout << "??? < " << enteredNumber << endl;
		}
		else if (enteredNumber < guessNumber)
		{
			cout << "??? > " << enteredNumber << endl;
		}
	}
	cout << "Вы проиграли =(" << endl;
}

//Функции сортировки массива с различными способами передачи массива в функцию
void ArraySorting1(int array[10])
{
	bool isFinish = false;
	while(!isFinish)
	{
		isFinish = true;
		for (int i = 0; i < 9; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
				isFinish = false;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}

//Функции сортировки массива с различными способами передачи массива в функцию
void ArraySorting2(int array[], int arraySize)
{
	ArraySorting3(array, arraySize);
}

//Функции сортировки массива с различными способами передачи массива в функцию
void ArraySorting3(int* array, int arraySize)
{
	bool isFinish = false;
	while (!isFinish)
	{
		isFinish = true;
		for (int i = 0; i < arraySize - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
				isFinish = false;
			}
		}
	}
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}

//Перемножение матриц
void MultiplyMatrices(int** matr1, int** matr2,int row, int inner,  int col)
{
	int **matr3 = new int *[row];

	for (int i = 0; i < row; i++)
	{
		matr3[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matr3[i][j] = 0;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			for (int k = 0; k < inner; k++)
			{
				matr3[i][j] += matr1[i][k] * matr2[k][j];
			}
		}
	}

	cout << "Вывод результирующий матрицы: " << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matr3[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++)
	{
		delete matr3[i];
	}
	delete [] matr3;
}
