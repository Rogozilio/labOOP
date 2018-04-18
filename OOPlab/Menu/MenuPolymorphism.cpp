#pragma once
#include <iostream>
#include "../String/String.h"
#include "../Person/Person.h"
#include "../Person/PersonTools.h"
#include "../Person/Adult.h"
#include "../Person/Child.h"

void lab6()
{
	Person* persona;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) ���������� �������� ������ � ����� �� �����" << endl
			<< "0) ����� �� ���������" << endl;
		key = CheckSymbol();

		switch (key)
		{
		case 1:
		{
			int countPerson;
			cout << "������� ���������� ������ ��� ��������: ";
			cin >> countPerson;
			while (countPerson != 0)
			{
				if (rand() % 2)
				{
					cout << endl << "This is a child" << endl;
					// TODO: ��� �� ������������ ������������.
					// ����������� ��� ������ � ��������� ����� ����� ��������� (������� �����)
					// ����������
					Child* child = PersonTools::GetRandomChild(Male);
					persona = child;
					cout << persona->GetDescription() << endl;
					delete child;
				}
				else
				{
					cout << endl << "This is an adult" << endl;
					// TODO: ��� �� ������������ ������������.
					// ����������� ��� ������ � ��������� ����� ����� ��������� (������� �����)
					// ����������
					Adult* adult = PersonTools::GetRandomAdult(Male);
					persona = adult;
					cout << persona->GetDescription() << endl;
					delete adult;
				}
				countPerson--;
			}
			break;
		}
		case 0:
		{
			isMenu = false;
			break;
		}
		default:
		{
			cout << "��������� ����  ";
			break;
		}
		}
	}
}