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
			<< "2) ����� ������������� ���������� " << endl
			<< "3) ������� �����" << endl
			<< "4) ����/����� ����������" << endl
			<< "5) ������ � ����������" << endl
			<< "6) ������/�������� �����" << endl
			<< "7) ��������� �����" << endl
			<< "8) ���� � ����-��������" << endl
			<< "9) ���� � ����-��������" << endl
			<< "10) ������������ ����" << endl
			<< "11) �������� break" << endl
			<< "12) ����� � ������� ��������������" << endl
			<< "0) ����� �� ���������" << endl
			<< "������� ����� ������� ��� �� ���������� ";
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
			cout << "��������� ����  ";
			break;
		}
	}
	system ("pause");
}