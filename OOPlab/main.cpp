#include "lab1/lab1.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
//TODO: ����������� ���������� �������� ���������� ���� RSDN https://rsdn.org/article/mag/200401/codestyle.XML
//TODO: � ��������� ���� ��� � ����������� �� ����������

int main()
{
	setlocale(LC_ALL, "rus");
	int numberLab;
	bool isMenu = true;
	cout << "1)lab1 " << endl;
	cout << "2)lab2 " << endl;
	cout << "3)lab3 " << endl;
	cout << "������� ����� ������������ ������: " << endl;
	numberLab = CheckSymbol();
	while (isMenu)
	{
		switch (numberLab)
		{
		case 1:
		{
			lab1();
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
		default:
		{
			isMenu = false;
			break;
		}
		}
	}
	return 0;
}