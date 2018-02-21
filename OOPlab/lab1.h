#pragma once
#include <iostream>
using namespace std;

inline void HelloWorld()
{
	cout << endl << "Hello, World!" << endl << endl;
}

inline void sumVariables()
{
	int a; // ���������� ������������� ����������
	a = 5; // ������������� ���������� ���������
	int b = 3; // ��������� ������������� ���������� � �������������
	cout << "Variable a equals = " << a << endl; // ����� �������� ���������� �� �����
	cout << "Variable b equals = " << b << endl; // �������� ���������� ����������� ������
	cout << "Summ of a and b equals = " << a+b << endl; // ����� �������� �����
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
	// ����� ���������� ���������, ����������� ���������� ���������
	// �������� �������� �������� ���� � �������� ������������
	// ����������� � ����� ���������
	cout << "---Program for integer summation---";
	// ������ ��������� ������������, ����� ������ ��� ����� ������
	cout << endl << "Enter first integer value: ";
	cin >> a; // ������ �������� ���������� � ����������
	cout << endl << "Enter second integer value: ";
	cin >> b;
	cout << endl <<"Summ of a and b equals" << endl <<  a << " + " <<  b << " = " <<  a + b << endl;
}

inline void pointer()
{
	int value;
	int* pointer; // ���������� ��������� �� ������������� ��� ������
	int anotherValue;
	value = 5;
	pointer = &value; // �������� ������ ������ ����������
					  // pointer ����� ������� ����� ������
					  // ������������� ����������
	anotherValue = *pointer; // �������� �������������
							 // ����� ��������, ����������� ��� ������������� ���������
	cout << "Value, stored in pointer: " << endl << anotherValue << endl;
	// ����� ������, ������� �������� � ���������
	cout << "Address in pointer: " << endl << pointer << endl;
	// ����� ���������� ������������� ���������
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
	while (a < 5) // �������� ���� � ����-��������
	{
		cout << "Value is now = " << a << endl;
		a++;
	}

}

inline void useDoWhile()
{
	int a = 0;
	do // �������� ���� � ����-��������
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
			break; // ���� �������� �������� ��������� ����
		}
	}
	cout << endl << "A is " << a << endl;
}

inline void last()
{
	int a = 5;
	int b = 3;
	float z;
	// ������� ���������� �����
	z = a;
	cout <<  "Value of z is " << z << endl;
	// ������ - ����������� ���������� �����!
	a = z;
	// ����� ���������� �����
	a = (int)z;
	cout << "Value of a is " << a << endl;
	// ������� ���������� ���������� �������
	// ������������� ����������
	z = a / b;
	cout << "Value of z is " << z << endl;
	// ����� ���������� � � float � ������� b � float
	// ��� ���������� �������
	z = ((float)a) / b;
	cout << "Value of z is " << z << endl;
}

