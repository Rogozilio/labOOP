#include <iostream>
#include <ctime>
#include <Windows.h>
#include "map4.h"
#include "person4.h"
#include "StructPerson.h"

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

PersonLab4& MakeRandomPerson()
{
		srand(time(NULL));
		PersonLab4* person = new PersonLab4;
		person->Surname = surname[rand() % 15];
		person->Name = name[rand() % 15];
		person->Age = 10 + rand() % 60;
		if ((rand() % 2) == 0)
		{
			person->Sex = Female;
		}
		else
		{
			person->Sex = Male;
		}
		return *person;
}

int GetLength(PersonList* head)
{
	int length = 0;
	PersonList* temp = head;
	if (temp == NULL)
	{
		return 0;
	}
	else
	{
		while (temp != NULL)
		{
			length++;
			temp = temp->Next;
		}
		return length;
	}
}

PersonList* Add(PersonLab4& person, PersonList*& head, PersonList*& tail)
{
	PersonList* temp = new PersonList;
	temp->Person = MakeRandomPerson();
	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		temp->Prev = tail;
		tail->Next = temp;
		tail = temp;
	}
	return temp;
}

void Show(PersonList* head)
{
	
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	PersonList* temp = head;
	if (head == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << endl << "Фамилия: " << temp->Person.Surname << endl;
			cout << "Имя: " << temp->Person.Name << endl;
			cout << "Возраст: " << temp->Person.Age << endl;
			cout << "Пол: " << temp->Person.Sex << endl << endl;
			temp = temp->Next;
		}
	}
}

PersonList* Get(int index, PersonList* head)
{
	PersonList* temp = head;
	if (index >= 0 && index < GetLength(head))
	{
		for (int i = 0; i < index; i++)
		{
			temp = temp->Next;
		}
		return temp;
	}
	else
	{
		return NULL;
	}
}

void Remove(int index, PersonList*& head, PersonList*& tail)
{
	PersonList* temp = head;
	int numberIndex = 0;
	if (index >= 0 && index < GetLength(head))
	{
		while (index != numberIndex++)
		{
			temp = temp->Next;
		}

		if (head == temp)
		{
			if (temp->Next == NULL)
			{
				head = NULL;
				tail = NULL;
			}
			else
			{
				temp->Next->Prev = NULL;
				head = temp->Next;
			}
		} 
		else if (tail == temp)
		{
			tail->Prev->Next = NULL;
			tail = tail->Prev;
		}
		else
		{
			temp->Prev->Next = temp->Next;
			temp->Next->Prev = temp->Prev;
		}
	}
}

void Insert(PersonLab4& person, int index, PersonList* head)
{
	PersonList* temp = head;
	int numberIndex = 0;
	if (index >= 0 && index < GetLength(head))
	{
		while (index != numberIndex++)
		{
			temp = temp->Next;
		}
		temp->Person = person;
	}
}

void Clear(PersonList*& head, PersonList*& tail)
{
	PersonList* temp = head;
	for (int i = GetLength(head); i > 0; i--)
	{
		delete temp;
		temp = temp->Prev;
	}
	head = NULL;
	tail = NULL;
}



