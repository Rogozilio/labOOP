#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <Windows.h>
#include "lab2/lab2.h"
#include "lab3/lab3.h"
#include "lab3/MenuEnum.h"
#include "lab3/Person.h"
#include "lab4/lab4.h"
#include "lab4/PersonList4.h"
#include "lab4/Stack.h"
#include "lab5/PersonList.h"
#include "lab5/PersonListItem.h"
#include "lab5/Person5.h"
#include "lab5/PersonTools.h"
#include "lab5/PersonTools.cpp"
#include "lab6/Adult.h"
#include "lab6/Child.h"
#include "lab7/List7.h"
#include "lab7/ListItem7.h"
#include "lab7/List7.cpp"

using namespace std;

void lab2()
{
	srand(time(NULL));
	int key;
	bool isMenu = true;
	while (isMenu)
	{

		cout << "1) Hello World " << endl
			<< "2) ����������� " << endl
			<< "3) ������ ����������� ��������� (���������) " << endl
			<< "4) ������ ����������� ��������� (������)" << endl
			<< "5) ���������� �������" << endl
			<< "6) ���������� ����������" << endl
			<< "7) ���������� ����� � �������" << endl
			<< "8) ������ ����� �����" << endl
			<< "9) ���������� �������" << endl
			<< "10) ������������ ������" << endl
			<< "0) ����� �� ���������" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
			{
				PrintHelloWorld();
				break;
			}
			case 2:
			{
				int value1;
				int value2;
				char operationKey;

				cout << "������� ������ �������: ";
				cin >> value1;

				cout << "������� ������ �������: ";
				cin >> value2;

				do 
				{
					cout << "������� ��������: ";
					cin >> operationKey;
				} while ((operationKey != '+') && (operationKey != '-') && 
					(operationKey != '*') && (operationKey != '/') && 
					(operationKey != '%'));
				cout << MakeCalculation(value1, value2, operationKey) << endl;
				break;
			}
			case 3:
			{
				double x1;
				double x2;
				double *x1Pointer = &x1;
				double *x2Pointer = &x2;

				cout << "��������� ����������� ���������: � = 1, b = 3, c = 2 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsPointer(1, 3, 2, x1Pointer, x2Pointer) << endl << endl;

				cout << "��������� ����������� ���������: � = 1, b = 4, c = 0 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsPointer(1, 4, 0, x1Pointer, x2Pointer) << endl << endl;

				cout << "��������� ����������� ���������: � = 0, b = 1, c = 2 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsPointer(0, 1, 2, x1Pointer, x2Pointer) << endl << endl;

				cout << "��������� ����������� ���������: � = 0, b = 0, c = 3 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsPointer(0, 0, 3, x1Pointer, x2Pointer) << endl << endl;

				cout << "��������� ����������� ���������: � = 0, b = 1, c = 0 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsPointer(0, 1, 0, x1Pointer, x2Pointer) << endl << endl;

				cout << "��������� ����������� ���������: � = 4, b = 1, c = 4 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsPointer(4, 1, 4, x1Pointer, x2Pointer) << endl << endl;
				break;
			}
			case 4:
			{
				double x1;
				double x2;

				cout << "��������� ����������� ���������: � = 1, b = 3, c = 2 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsLink(1, 3, 2, x1, x2) << endl << endl;

				cout << "��������� ����������� ���������: � = 1, b = 4, c = 0 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsLink(1, 4, 0, x1, x2) << endl << endl;

				cout << "��������� ����������� ���������: � = 0, b = 1, c = 2 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsLink(0, 1, 2, x1, x2) << endl << endl;

				cout << "��������� ����������� ���������: � = 0, b = 0, c = 3 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsLink(0, 0, 3, x1, x2) << endl << endl;

				cout << "��������� ����������� ���������: � = 0, b = 1, c = 0 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsLink(0, 1, 0, x1, x2) << endl << endl;

				cout << "��������� ����������� ���������: � = 4, b = 1, c = 4 " << endl;
				cout << "���������� ������ ����������� ��������� = " << GetRootsLink(4, 1, 4, x1, x2) << endl << endl;
				break;
			}
			case 5:
			{
				int a = 1;
				int b = 2;
				SummNumbers(a, b);
				double x = 3.0;
				double y = 4.0;
				SummNumbers(x, y);
				SummNumbers(a, y);
				float m = 5.0;
				float n = 6.0;
				SummNumbers(m, n);
				break;
			}
			case 6:
			{
				cout << "Global Variable: " << globalVariable << endl;
				GlobalPlusTwo();
				cout << "Global Variable: " << globalVariable << endl;
				GlobalMultiplyThree();
				cout << "Global Variable: " << globalVariable << endl;
				GlobalEqualsOne();
				cout << "Global Variable: " << globalVariable << endl;
				globalVariable = 5;
				cout << "Global Variable: " << globalVariable << endl;
				break;
			}
			case 7:
			{
				int base;
				int power;
				cout << "������� ����� �����: ";
				cin >> base;
				cout << "������� ������� � ������� ������ �������� ������ �����: ";
				cin >> power;
				cout << "��������� = " << GetPower(base, power) << endl;
			}
			case 8:
			{
				int guessNumber = rand() % 10; // ��������� ������������ �����
				int enteredNumber = -1; // �������� ������������� �����
				int shots = 3; // ���������� �������
				cout << "��������� ������� ����� �� 0 �� 10! ";
				GuessRandomNumber(guessNumber, enteredNumber, shots);
			}
			case 9:
			{
				const int arraySize = 10;
				int array[arraySize];

				for (int i = 0; i < arraySize; i++)				{					array[i] = rand() % 20;				}

				cout << "������ ������ ����������: " << endl;
				ArraySorting1(array);
				cout << "������ ������ ����������: " << endl;
				ArraySorting2(array, arraySize);
				cout << "������ ������ ����������: " << endl;
				ArraySorting3(array, arraySize);
			}
			case 10:
			{
				int matrSize1;
				int matrSize2;
				int matrSize3;

				cout << "������� ����� ������ �������: ";
				cin >> matrSize1;
				cout << "������� ������ ������ ������� � ����� ������ �������: ";
				cin >> matrSize2;
				cout << "������� ������ ������ �������: ";
				cin >> matrSize3;

				int **matr1 = new int *[matrSize1];
				int **matr2 = new int *[matrSize2];

				for (int i = 0; i < matrSize1; i++)
				{
					matr1[i] = new int[matrSize2];
				}
				for (int i = 0; i < matrSize2; i++)
				{
					matr2[i] = new int[matrSize3];
				}

				cout << "����� ������ �������: " << endl;
				for (int i = 0; i < matrSize1; i++)
				{
					for (int j = 0; j < matrSize2; j++)
					{
						matr1[i][j] = rand() % 10;
						cout << matr1[i][j] << ' ';
					}
					cout << endl;
				}
				cout << "����� ������ �������: " << endl;
				for (int i = 0; i < matrSize2; i++)
				{
					for (int j = 0; j < matrSize3; j++)
					{
						matr2[i][j] = rand() % 10;
						cout << matr2[i][j] << ' ';
					}
					cout << endl;
				}

				MultiplyMatrices(matr1, matr2, matrSize1, matrSize2, matrSize3);

				for (int i = 0; i < matrSize1; i++)
				{
					delete matr1[i];
				}
				for (int i = 0; i < matrSize2; i++)
				{
					delete matr2[i];
				}
				delete [] matr1;
				delete [] matr2;
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
	PersonList4* person = new PersonList4;
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
				AddPerson(person, MakeRandomPerson());
				cout << endl << "������� �������� " << endl << endl;
				break;
			}
			case 2:
			{
				ShowList(person->Head);
				break;
			}
			case 3:
			{
				int index = 0;
				PersonLab4* newPerson = new PersonLab4;
				cout << "������� ������: ";
				cin >> index;
				newPerson = Get(index, person);
				cout << endl << newPerson << endl;
				break;
			}
			case 4:
			{
				int index = 0;
				cout << "������� ������: ";
				cin >> index;
				RemovePerson(index, person);
				break;
			}
			case 5:
			{
				int index = 0;
				PersonListItem4* newPerson = new PersonListItem4;
				newPerson->Person = MakeRandomPerson();
				cout << "������� ������: ";
				cin >> index;
				InsertPerson(newPerson->Person, index, person);
				break;
			}
			case 6:
			{
				Clear(person);
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
				Person5* persona = PersonTools<Person5>::GetRandomPerson(1, 1);
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
						Child* child = PersonTools<Child>::GetRandomPerson(rand() % 2, 1);
						cout << child->GetDescription() << endl;
						delete child;
					}
					else
					{
						cout << endl << "This is an adult" << endl;
						Adult* adult = PersonTools<Adult>::GetRandomPerson(rand() % 2, 0);
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
				List7<double> Person;
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
				Person.AddIndex(value, 3);
				Person.Show();
				delete value;
				break;
			}
			case 2:
			{
				List7<Person5> Person;
				Person.Add(PersonTools<Person5>::GetRandomPerson(rand() % 2,rand() % 2));
				Person.Add(PersonTools<Person5>::GetRandomPerson(rand() % 2, rand() % 2));
				Person.Add(PersonTools<Person5>::GetRandomPerson(rand() % 2, rand() % 2));
				Person.Add(PersonTools<Person5>::GetRandomPerson(rand() % 2, rand() % 2));
				Person.Add(PersonTools<Person5>::GetRandomPerson(rand() % 2, rand() % 2));
				Person.ShowPerson();
				Person.RemoveAt(2);
				Person.ShowPerson();
				Person.AddIndex(PersonTools<Person5>::GetRandomPerson(rand() % 2, rand() % 2), 3);
				Person.ShowPerson();
				break;
			}
			case 3:
			{
				/*double* value = new double[5];
				List7<double[5]> Person;
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
				Person.AddIndex(value[1], 3);
				Person.Show();
				delete value;*/
				break;
			}
			case 4:
			{
				/*double* value = new double;
				List7<List7<double>> Person;
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
				Person.AddIndex(value, 3);
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