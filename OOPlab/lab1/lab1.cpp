#include <iostream>

using namespace std;

void HelloWorld()
{
	cout << endl << "Hello, World!" << endl << endl;
}

void SumVariables()
{
	int a; // ���������� ������������� ����������
	a = 5; // ������������� ���������� ���������
	int b = 3; // ��������� ������������� ���������� � �������������
	cout << "Variable a equals = " << a << endl; // ����� �������� ���������� �� �����
	cout << "Variable b equals = " << b << endl; // �������� ���������� ����������� ������
	cout << "Summ of a and b equals = " << a + b << endl; // ����� �������� �����
}

void DivVariables()
{
	int a = 5;
	int b = 3;
	float z = 5.0;
	float y = 3.0;
	cout << "Float variables division:" << endl << z / y << endl << endl;
	cout << "Integer variables division:" << endl << a / b << endl << endl;
}

void InputVariables()
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
	cout << endl << "Summ of a and b equals" << endl << a << " + " << b << " = " << a + b << endl;
}

void Pointer()
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

void EvenAndOdd()
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
//
void EvenAndOdd2()
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

void UseWhile()
{
	int a = 0;
	while (a < 5) // �������� ���� � ����-��������
	{
		cout << "Value is now = " << a << endl;
		a++;
	}

}

void UseDoWhile()
{
	int a = 0;
	do // �������� ���� � ����-��������
	{
		cout << "Value is now = " << a << endl;
		a++;
	} while (a < 5);
}

void Cycle()
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
		cout << "Iteration Value" << endl << i << ' ' << a << endl;
	}
}

void CycleEnd()
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

void ExplicitType()
{
	int a = 5;
	int b = 3;
	float z;
	// ������� ���������� �����
	z = a;
	cout << "Value of z is " << z << endl;
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

