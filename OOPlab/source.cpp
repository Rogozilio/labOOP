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
			<< "2) ����� ����������� ���������� " << endl
			<< "3) ������� �����" << endl
			<< "4) ����/����� ����������" << endl
			<< "5) ������ � ����������" << endl
			<< "6) ������/�������� �����" << endl
			<< "7) ��������� �����" << endl
			<< "8) ���� � ����-��������" << endl
			<< "9) ���� � ���� ��������" << endl
			<< "10) ������������ ����" << endl
			<< "11) �������� break" << endl
			<< "12) ����� � ������� ��������������" << endl
			<< "0) ����� �� ���������" << endl
			<< "������� ����� ������� ��� �� ���������� ";
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
			cout << "��������� ����  ";
			break;
		}
	}
	system ("pause");
	return 0;
}