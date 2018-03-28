#pragma once
#include <iostream>
#include "Person.h"
#include "lab3.h"

using namespace std;

int GetLengthString(char* string)
{
	int length = 0;
	for (int i = 0; string[i] != 0; i++)
	{
		length++;
	}
	return length;
}

char* Concatenate(char* string1, char* string2)
{
	//TODO: Если сумма длин входных строк будет больше 100, то функция аварийно завершит программу
	//TODO: Исправить функцию, чтобы выделялось точно нужное количество символов
	//исправлено
	char* string3 = new char [GetLengthString(string1) + GetLengthString(string2)];
	int j = 0;
	
	//TODO: Лучше делать двумя отдельными циклами.
	// сумма длин строк под условием выхода цикла - нестандартное, а следовательно плохо читаемое решение
	//исправлено
	for (int i = 0; i < GetLengthString(string1); i++)
	{
		string3[j++] = string1[i];
	}
	for (int i = 0; i < GetLengthString(string2); i++)
	{
		string3[j++] = string2[i];
	}
	string3[GetLengthString(string1) + GetLengthString(string2)] = 0;
	return string3;
}

char* GetSubstring(char* string, int startIndex, int charCount)
{
	if (startIndex < 0 || charCount < 0 || startIndex + charCount - 1 > GetLengthString(string))
	{ 
		return NULL;
	}
	//TODO: Если charCount больше 100, то функция аварийно завершит программу
	//TODO: Исправить функцию, чтобы выделялось точно нужное количество символов
	//исправлено
	char* newString = new char[charCount];

	for (int i = 0; i != charCount; i++)
	{
		newString[i] = string[startIndex + i];
	}
	newString[charCount] = 0;
	return newString;
}

int FindSubstring(char* string, char* subString)
{
	int j = 0;
	int index = 0;
	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] != subString[j])
		{
			index++;
			if (j == GetLengthString(subString))
			{
				break;
			}
		}
		else
		{
			j++;
		}
	}

	if (j != GetLengthString(subString))
	{			
		return -1;
	}
	else
	{
		return index - 1;
	}
}

char* Uppercase(char* string)
{
	//TODO: Аналогично предыдущим функциям
	//исправлено
	char* newString = new char[GetLengthString(string)];
	int grow = -32;

	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			//TODO: 32 - магическое число, ухудшающее читаемость кода.
			// Реализовать функцию без магического числа
			//исправлено
			newString[i] = (int)string[i] + grow;
		}
		else
		{
			newString[i] = string[i];
		}
	}
	newString[GetLengthString(string)] = 0;

	return newString;
}

char* Lowercase(char* string)
{
	//TODO: Аналогично предыдущим функциям
	//исправлено
	char* newString = new char[GetLengthString(string)];
	int grow = -32;

	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			//TODO: 32 - магическое число, ухудшающее читаемость кода.
			// Реализовать функцию без магического числа
			//исправлено
			newString[i] = (int)string[i] - grow;
		}
		else
		{
			newString[i] = string[i];
		}
	}
	newString[GetLengthString(string)] = 0;

	return newString;
}

int SplitFilename(char* source, char* path, char* name, char* extension)
{
	int pathIndex = 0;
	int extensionIndex = 0;
	int j = 0;
	int k = 0;

	for (int i = 0; source[i] != 0; i++)
	{
		if (source[i] == '\\')
		{
			pathIndex = i;
		}
		if (source[i] == '.')
		{
			extensionIndex = i;
		}
	}

	if (pathIndex == 0)
	{
		path[0] = ' ';
	}
	if (extensionIndex == 0)
	{
		extensionIndex = GetLengthString(source);
	}
	
	for (int i = 0; source[i] != 0; i++)
	{
		if (i <= pathIndex && pathIndex != 0)
		{
			path[i] = source[i];
		}
		if ( (pathIndex == 0 || i > pathIndex) && i < extensionIndex)
		{
			name[j++] = source[i];
		}
		if (i >= extensionIndex)
		{
			extension[k++] = source[i];
		}
	}
	path[pathIndex + 1] = 0;
	name[j] = 0;
	extension[k] = 0;
	if (j != 0)
	{
		return j;
	}
	else
	{
		return NULL;
	}
}

void SplitFilenamePrint(int value, char* path, char* name, char* extension)
{
	if (value != NULL)
	{
		//TODO: функции бизнес-логики ничего не должны выводить на экран
		//исправлено
		cout << "path: " << path << endl;
		cout << "name: " << name << endl;
		cout << "extension: " << extension << endl << endl;
	}
	else
	{
		//TODO: функции бизнес-логики ничего не должны выводить на экран
		//исправлено
		cout << "path: NULL" << endl;
		cout << "name: NULL" << endl;
		cout << "extension: NULL" << endl << endl;
	}
}

char* ReplaceTabsOnSpaces(char* string, int numberSpace)
{
	//TODO: Аналогично предыдущим функциям
	//исправлено
	char* newString = new char[GetLengthString(string) * numberSpace];
	int newStringIndex = 0;
	int j = 0;
	for (int i = 0; i < GetLengthString(string); i++)
	{
		if (string[i] == '\t')
		{
			newString[newStringIndex++] = ':';
			while ((j + 1) % numberSpace != 0)
			{
				newString[newStringIndex++] = ':';
				j++;
			}			
		}
		else
		{
			newString[newStringIndex++] = string[i];
		}
		j++;
	}
	newString[newStringIndex] = 0;
	return newString;
}

char* ReplaceSpacesOnTabs(char* string, int numberSpace)
{
	//TODO: Аналогично предыдущим функциям
	//исправлено
	char* newString = new char[GetLengthString(string)];
	int j = 0;
	int newStringIndex = 0;
	for (int i = 0; i < GetLengthString(string); i++)
	{
		if (string[i] == ':' && (i + 1) % numberSpace == 0 && i != 0)
		{
			newStringIndex = newStringIndex - j;
			newString[newStringIndex++] = '\t';
			j = 0;
		}
		else
		{
			newString[newStringIndex++] = string[i];
		}
		if (string[i] == ':')
		{
			j++;
		}
		else
		{
			j = 0;
		}

	}
	newString[newStringIndex] = 0;
	return newString;
}

Person ReadPerson()
{
	int sex;
	Person newPerson;
	cout << "Введите фамилию: ";
	cin >> newPerson.Surname;
	cout << endl << "Введите имя: ";
	cin >> newPerson.Name;
	cout << endl << "Введите возраст: ";
	cin >> newPerson.Age;
	cout << endl << "Введите пол: ";

	do
	{
		cin >> sex;
	} while (sex != 0 && sex != 1);
	switch (sex)
	{
		case Female:
			newPerson.Sex = Female;
			break;
		case Male:
			newPerson.Sex = Male;
			break;
		default:
			break;
	}
	return newPerson;
}

void PrintPerson(Person& person)
{
	cout << "Фамилия: " << person.Surname << endl;
	cout << "Имя: " << person.Name << endl;
	cout << "Возраст: " << person.Age << endl;
	cout << "Пол: " << person.Sex << endl;
}