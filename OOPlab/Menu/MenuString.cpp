#pragma once
#include <iostream>
#include "../String/String.h"
#include "../String/String.h"
#include "../String/MenuEnum.h"

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
			SplitFilenamePrint(SplitFilename("d:\\folder\\file.exe", path, name, extension), path, name, extension);
			SplitFilenamePrint(SplitFilename("d:\\folder\\subfolder\\file.exe", path, name, extension), path, name, extension);
			SplitFilenamePrint(SplitFilename("d:\\folder\\subfolder\\file", path, name, extension), path, name, extension);
			SplitFilenamePrint(SplitFilename("file.txt", path, name, extension), path, name, extension);
			SplitFilenamePrint(SplitFilename("d:\\folder\\.exe", path, name, extension), path, name, extension);
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