#pragma once
// TODO: ������� ������� ���� - �������� ��������.
// ��������� �� ��������� ����� ��� ������ ������������ ������.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <Windows.h>
#include "String/String.h"
#include "String/MenuEnum.h"
#include "Stack/Stack.h"
#include "List/PersonList.h"
#include "List/PersonListItem.h"
#include "Person/Person.h"
#include "Person/PersonTools.h"
#include "Person/Adult.h"
#include "Person/Child.h"
#include "List/TemplateList.h"
#include "List/TemplateListItem.h"
#include "List/TemplateList.cpp"

using namespace std;

void lab3()
{
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) ���������� ����� ������" << endl
			<< "2) ����������� ���� �����" << endl
			<< "3) ������� ���������" << endl
			<< "4) ����� ���������" << endl
			<< "5) ������� ������ � ������� �������" << endl
			<< "6) ������� ������ � ������ �������" << endl
			<< "7) ���������� �������� ������ �� path, name � extension" << endl
			<< "8) �������� ��������� �� �������" << endl
			<< "9) �������� ������� �� ���������" << endl
			<< "10) ���� � ����� ������ ��������� Person" << endl
			<< "0) ����� �� ���������" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case GetLengthEnum:
			{
				char string[] = { "" };
				cout << "������� ������: ";
				cin.ignore();
				cin.getline(string, 256);
				cout << "����� ������ = " << GetLengthString(string) << endl;
				break;
			}
			case ConcatenateEnum:
			{
				char string1[] = { "" };
				char string2[] = { "" };

				cout << "������� ������ ������: ";
				cin.ignore();
				cin.getline(string1, 256);
				cout << "������� ������ ������: ";
				cin.getline(string2, 256);
				char* string3 = Concatenate(string1, string2);
				cout << string3 << endl;
				delete[] string3;
				//TODO: ����� � ����� ���������� ������� ������� ������ �����������, �� ������ ����� �� �������������. ���������!
				//?
				break;
			}
			case GetSubstringEnum:
			{
				char string[] = { "Hello, World!" };
				char* newString;

				if (GetSubstring(string, 2, 4) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, 2, 4);
					cout << newString << endl;
				}

				if (GetSubstring(string, -3, 3) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, -3, 3);
					cout << newString << endl;
				}

				if (GetSubstring(string, 2, -4) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, 2, -4);
					cout << newString << endl;
				}

				if (GetSubstring(string, 7, 8) == NULL)
				{
					cout << "NULL" << endl;
				}
				else
				{
					newString = GetSubstring(string, 7, 8);
					cout << newString << endl;
				}
				delete[] newString;
				break;
			}
			case FindSubstringEnum:
			{
				cout << FindSubstring("Lorem ipsum aset amet", "ipsum a") << endl;
				cout << FindSubstring("Lorem ipsum aset amet", "Arom") << endl;
				cout << FindSubstring("Lorem ipsum aset ametsum", "sum") << endl;
				break;
			}
			case UppercaseEnum:
			{
				cout << "�������� ������: Different cases in That string, also 1 and 2 numbers!" << endl;
				cout << "���������: " << Uppercase("Different cases in That string, also 1 and 2 numbers!") << endl;
				break;
			}
			case LowercaseEnum:
			{
				cout << "�������� ������: Different cases in That string, also 1 and 2 numbers!" << endl;
				cout << "���������: " << Lowercase("Different cases in That string, also 1 and 2 numbers!") << endl;
				break;
			}
			case SplitFilenameEnum:
			{
				char path[100];
				char name[100];
				char extension[100];
				SplitFilenamePrint( SplitFilename("d:\\folder\\file.exe", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("d:\\folder\\subfolder\\file.exe", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("d:\\folder\\subfolder\\file", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("file.txt", path, name, extension), path, name, extension);
				SplitFilenamePrint( SplitFilename("d:\\folder\\.exe", path, name, extension), path, name, extension);
				break;
			}
			case ReplaceTabsOnSpacesEnum:
			{
				cout << ReplaceTabsOnSpaces("Cake\tis\ta lie!", 4) << endl;
				cout << ReplaceTabsOnSpaces("Cake\t\tis a lie!", 4) << endl;
				cout << ReplaceTabsOnSpaces("\tCake is \tlie!", 4) << endl;
				break;
			}
			case ReplaceSpacesOnTabsEnum:
			{
				cout << ReplaceSpacesOnTabs("Cake::::is::a:lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake::::is::::a:lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake:is:a:::::::lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake:is::a:lie!", 4) << endl;
				break;
			}
			case 10:
			{
				Person person1 = ReadPerson();
				PrintPerson(person1);
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

void lab4()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Stack* stack = NULL;
	PersonList Person1;
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		
		SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
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
		SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY);
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

void lab6()
{
	PersonList Person1;
	//���� ����, ����������� �����������
	{
		Person* person;
		auto adult = new Adult;
		adult->Age = 30;
		adult->Name = "adult";
		adult->Surname = "adult";
		adult->MarriedOn = PersonTools::GetRandomPerson(Male);
		person = adult;
		// ����� ��������� �� ������� ����� ���������� 
		// ���������� ������ GetDescription() �������� ������, � �� ���������.
		// ��� ��������, ��� ����������� �� ��������
		cout << person->GetDescription() << endl;
		auto child = new Child;
		child->Age = 10;
		child->Name = "Child";
		child->Surname = "Child";
		child->Father = adult->MarriedOn;
		child->Mother = adult;
		person = child;
		// ����� ��������� �� ������� ����� ���������� 
		// ���������� ������ GetDescription() �������� ������, � �� ���������.
		// ��� ��������, ��� ����������� �� ��������
		cout << person->GetDescription() << endl;
	}
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
						Child* child = PersonTools::GetRandomChild(Male);
						cout << child->GetDescription() << endl;
						delete child;
					}
					else
					{
						cout << endl << "This is an adult" << endl;
						// TODO: ��� �� ������������ ������������.
						// ����������� ��� ������ � ��������� ����� ����� ��������� (������� �����)
						Adult* adult = PersonTools::GetRandomAdult(Male);
						cout << adult->GetDescription() << endl;
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

void lab7()
{
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) ��������������� �� double" << endl
			<< "2) ��������������� �� *Person" << endl
			<< "3) ��������������� �� double[5]" << endl
			<< "4) ��������������� �� List<double>" << endl
			<< "0) ����� �� ���������" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
			{
				double* value = new double;
				TemplateList<double> Person;
				*value = 1.11;
				Person.Add(value);
				*value = 2.22;
				Person.Add(value);
				*value = 3.33;
				Person.Add(value);
				*value = 4.44;
				Person.Add(value);
				*value = 5.55;
				Person.Add(value);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				*value = 6.66;
				Person.Insert(value, 3);
				Person.Show();
				delete value;
				break;
			}
			case 2:
			{
				TemplateList<Person> Person;
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Add(PersonTools::GetRandomPerson(Female));
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Add(PersonTools::GetRandomPerson(Female));
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.ShowPerson();
				Person.RemoveAt(2);
				Person.ShowPerson();
				Person.Insert(PersonTools::GetRandomPerson(Male), 3);
				Person.ShowPerson();
				break;
			}
			case 3:
			{
				/*double* value = new double[5];
				TemplateList<double[5]> Person;
				value[0] = 1.11;
				Person.Add(value[1]);
				value[0] = 2.22;
				Person.Add(value[1]);
				value[0] = 3.33;
				Person.Add(value[1]);
				value[0] = 4.44;
				Person.Add(value[1]);
				value[0] = 5.55;
				Person.Add(value[1]);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				value[0] = 6.66;
				Person.Insert(value[1], 3);
				Person.Show();
				delete value;*/
				break;
			}
			case 4:
			{
				/*double* value = new double;
				TemplateList<TemplateList<double>> Person;
				*value = 1.11;
				Person.Add(value);
				*value = 2.22;
				Person.Add(value);
				*value = 3.33;
				Person.Add(value);
				*value = 4.44;
				Person.Add(value);
				*value = 5.55;
				Person.Add(value);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				*value = 6.66;
				Person.Insert(value, 3);
				Person.Show();
				delete value;*/
				break;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
		}
	}
}