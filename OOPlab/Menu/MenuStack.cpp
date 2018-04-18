#pragma once
#include <iostream>
#include "../String/String.h"
#include "../Stack/Stack.h"
#include "../List/PersonList.h"
#include "../List/PersonListItem.h"
#include "../Person\PersonTools.h"

void lab4()
{
	Stack* stack = NULL;
	PersonList Person1;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) ���������� �������� ������" << endl
			<< "2) ����� ������ �� �����" << endl
			<< "3) ������� ��������� �� �������" << endl
			<< "4) �������� �������� ������ �� �������" << endl
			<< "5) ����������� �������� person �� �������" << endl
			<< "6) �������� ������" << endl
			<< "------------������ �� ������-------------" << endl
			<< "7) �������� ������� � ���� (Push)" << endl
			<< "8) ������� ������� ������� ����� (Pop)" << endl
			<< "9) �������� ������� ������� (Top)" << endl
			<< "10) ������ ����� (Size)" << endl
			<< "11) ���� ������? (IsEmpty)" << endl
			<< "0) ����� �� ���������" << endl;
		key = CheckSymbol();
		switch (key)
		{
		case 1:
		{
			Person* persona = PersonTools::GetRandomPerson(Male);
			Person1.Add(persona);
			cout << endl << "������� �������� " << endl << endl;
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
			int index = 0;
			cout << "������� ������: ";
			cin >> index;
			Person1.RemoveAt(index);
			cout << "������� ������" << endl;
			break;
		}
		case 5:
		{
			/*int index = 0;
			PersonListItem4* newPerson = new PersonListItem4;
			newPerson->Person = MakeRandomPerson();
			cout << "������� ������: ";
			cin >> index;
			InsertPerson(newPerson->Person, index, person);*/
			break;
		}
		case 6:
		{
			Person1.Clear();
			cout << endl << "������� ��������� " << endl << endl;
			break;
		}
		case 7:
		{
			int value;
			cout << "������� ��������: ";
			cin >> value;
			Push(stack, value);
			cout << "+ 1 ������� � �����" << endl;
			break;
		}
		case 8:
		{
			if (Pop(stack) == -1)
			{
				cout << endl << "���� ����" << endl;
			}
			else
			{
				cout << endl << Pop(stack) << endl;
			}
			break;
		}
		case 9:
		{
			if (Top(stack) == -1)
			{
				cout << endl << "���� ����" << endl;
			}
			else
			{
				cout << endl << Top(stack) << endl;
			}
			break;
		}
		case 10:
		{
			cout << "������ ����� = " << Size(stack) << endl;
			break;
		}
		case 11:
		{
			if (IsEmpty(stack) == true)
			{
				cout << endl << "��" << endl;
			}
			else
			{
				cout << endl << "��� " << endl;
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