#pragma once
#include <iostream>
#include "lab2.h"

using namespace std;

int globalVariable = 7;

void PrintHelloWorld()
{
	cout << "Hello, World!" << endl;
}
void SummNumbers(int value1, int value2)
{
	cout << "Summ of integer is " << value1 + value2 << endl;
}
//���������� ����� ���� ������������� ����������
void SummNumbers(double value1, double value2)
{
	cout << "Summ of double is " << value1 + value2 << endl;
}

//���������� ����� ���� ������������� ����������
void SummNumbers(int value1, double value2)
{
	cout << "Summ of integer and double is " << value1 + value2 << endl << endl;
}
{
	globalVariable += 2;
}

void GlobalMultiplyThree()
{
	globalVariable *= 3;
}

void GlobalEqualsOne()
{
	globalVariable = 1;
}
	return power != 0 ? base * GetPower(base, power - 1) : 1;
		cin >> enteredNumber;

	for (int i = 0; i < row; i++)
	{
		matr3[i] = new int[col];
	}