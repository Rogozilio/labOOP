#pragma once
#include <iostream>
#include "Person.h"
#include "lab3.h"

using namespace std;

int GetLength(char* string)
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
	char* string3 = new char[100];
	int j = 0;
	
	for (int i = 0; i < GetLength(string1) + GetLength(string2); i++)
	{
		if (i < GetLength(string1))
		{
			string3[i] = string1[i];
		}
		else
		{
			string3[i] = string2[j++];
		}
	}
	string3[GetLength(string1) + GetLength(string2)] = 0;
	return string3;
}

char* GetSubstring(char* string, int startIndex, int charCount)
{
	char* newString = new char[100];

	if (startIndex < 0 || charCount < 0 || startIndex + charCount - 1 > GetLength(string))
	{ 
		return NULL;
	}

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
			if (j == GetLength(subString))
			{
				break;
			}
		}
		else
		{
			j++;
		}
	}

	if (j != GetLength(subString))
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
	char* newString = new char[100];

	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			newString[i] = (int)string[i] - 32;
		}
		else
		{
			newString[i] = string[i];
		}
	}
	newString[GetLength(string)] = 0;

	return newString;
}

char* Lowercase(char* string)
{
	char* newString = new char[100];

	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			newString[i] = (int)string[i] + 32;
		}
		else
		{
			newString[i] = string[i];
		}
	}
	newString[GetLength(string)] = 0;

	return newString;
}

void SplitFilename(char* source, char* path, char* name, char* extension)
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
		extensionIndex = GetLength(source);
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
		cout << "path: " << path << endl;
		cout << "name: " << name << endl;
		cout << "extension: " << extension << endl << endl;
	}
	else
	{
		path = name = extension = NULL;
		cout << "path: NULL" << endl;
		cout << "name: NULL"  << endl;
		cout << "extension: NULL" << endl << endl;
	}
}

char* ReplaceTabsOnSpaces(char* string, int numberSpace)
{
	char* newString = new char[100];
	int newStringIndex = 0;
	int j = 0;
	for (int i = 0; i < GetLength(string); i++)
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
	char* newString = new char[100];
	int j = 0;
	int newStringIndex = 0;
	for (int i = 0; i < GetLength(string); i++)
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