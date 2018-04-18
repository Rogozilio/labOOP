#pragma once
#include <iostream>
#include "../String/String.h"
#include "../Person/Person.h"
#include "../Person/PersonTools.h"
#include "../List/PersonList.h"

void lab5()
{
	PersonList Person1;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) ���������� �������� ������" << endl
			<< "2) ����� ������ �� �����" << endl
			<< "3) ������� ��������� �� �������" << endl
			<< "4) ������� ������ ��������, ���� �� ���� � ������" << endl
			<< "5) ������� �������� �� ������" << endl
			<< "6) ������� �������� �� ������ �� �������" << endl
			<< "7) ������� ������" << endl
			<< "0) ����� �� ���������" << endl;
		key = CheckSymbol();

		switch (key)
		{
		case 1:
		{
			Person* persona = PersonTools::GetRandomPerson(Male);
			Person1.Add(persona);
			cout << persona->GetDescription() << endl;
			cout << "������� �������� �������" << endl;
			break;
		}
		case 2:
		{
			Person1.Show();
			break;
		}
		case 3:
		{
			int index = 0;
			cout << "������� ������: ";
			cin >> index;
			cout << Person1.Find(index) << endl;
			break;
		}
		case 4:
		{
			int index = rand() % Person1.GetCount();
			cout << Person1.IndexOf(Person1.Find(index)) << endl;
			break;
		}
		case 5:
		{
			int index = rand() % (Person1.GetCount() - 1);
			Person1.Remove(Person1.Find(index));
			cout << "������� ������" << endl;
			break;
		}
		case 6:
		{
			int index = 0;
			cout << "������� ������: ";
			cin >> index;
			Person1.RemoveAt(index);
			cout << "������� ������" << endl;
			break;
		}
		case 7:
		{
			Person1.Clear();
			cout << "������� ���������" << endl;
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