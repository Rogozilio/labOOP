#include <iostream>
#include <ctime>
#include <Windows.h>
#include <map>
#include "person4.h"
#include "PersonList4.h"
#include "PersonListItem4.h"

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

PersonLab4& MakeRandomPerson()
{
		srand(time(NULL));
		PersonLab4* person = new PersonLab4;
		//TODO: ������� � ���������� ������� ��������� - �����������!
		// �� ������ ����������� ������ ������ ������� ��� ��������� ��������� �����
		//����������
		map <int, string> surname = { { 0, "������" },
										{ 1, "��������" },
										{ 2, "���������" },
										{ 3, "������" },
										{ 4, "�������" },
										{ 5, "�������" },
										{ 6, "��������" },
										{ 7, "�������" },
										{ 8, "���������" },
										{ 9, "�������" },
										{ 10, "�����" },
										{ 11, "��������" },
										{ 12, "����������" },
										{ 13, "�������" },
										{ 14, "������" },
										{ 15, "��������" } };

		//TODO: ������� � ���������� ������� ��������� - �����������!
		// �� ������ ����������� ������ ������ ������� ��� ��������� ��������� �����
		//����������
		map <int, string> name = { { 0, "����" },
									{ 1, "�����" },
									{ 2, "��������" },
									{ 3, "�������" },
									{ 4, "��������" },
									{ 5, "��������" },
									{ 6, "�����" },
									{ 7, "����" },
									{ 8, "����" },
									{ 9, "��������" },
									{ 10, "�������" },
									{ 11, "������" },
									{ 12, "�������" },
									{ 13, "������" },
									{ 14, "������" },
									{ 15, "�������" } };
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

int GetLength(PersonListItem4* temp)
{
	int length = 0;
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

void AddPerson(PersonList4* list, PersonLab4& person)
{
	PersonListItem4* temp = new PersonListItem4;
	//TODO: �����������! � ����� �� ���������� � ������ �� ��� Person,
	// ������� ������ �� ���� �������, � �������� ����������������.
	// MakeRandomPerson() - ���������� �������, � ����� ���������� ������ � main/lab4menu()
	//����������
	temp->Person = person;
	if (list->Head == NULL)
	{
		list->Head = temp;
		list->Tail = temp;
	}
	else
	{
		temp->Prev = list->Tail;
		list->Tail->Next = temp;
		list->Tail = temp;
	}
}

void ShowList(PersonListItem4* temp)
{
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	if (temp == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			//TODO: ���� �������� ��� ������ � ������� � ���� ������, �� �����������/���������� ����� �������
			//����������
			cout << endl << "�������: " << temp->Person.Surname
				<< " | ���: " << temp->Person.Name
				<< " | �������: " << temp->Person.Age
				<< " | ���: " << temp->Person.Sex << endl;
			temp = temp->Next;
		}
	}
}

PersonLab4* Get(int index, PersonList4* temp)
{
	PersonListItem4* list = temp->Head;
	if (index >= 0 && index < GetLength(temp->Head))
	{
		for (int i = 0; i < index; i++)
		{
			list = list->Next;
		}
		return &list->Person;
	}
	else
	{
		return NULL;
	}
}

void RemovePerson(int index, PersonList4* temp)
{
	PersonListItem4* list =temp->Head;
	int numberIndex = 0;
	//TODO: � ������ ������� ��������� � ��������� ������� ���� �������������� ������ if
	//����������
	if (index >= 0 && index < GetLength(temp->Head))//������ ������ ������� � ������� �������� ���������
	{
		while (index != numberIndex++)
		{
			list = list->Next;
		}

		if (list == temp->Head)//���� �������� ������� = ������� �������� ������
		{
			if (list->Next == NULL)//���� ��������� ������� ������
			{
				//TODO: ������ ������
				//����������
				delete list;
				temp->Head = NULL;
				temp->Tail = NULL;
			}
			else
			{
				list->Next->Prev = NULL;
				//TODO: ������ ������
				//����������
				temp->Head = list->Next;
				delete list;
			}
		} 
		else if (list == temp->Tail)//���� �������� ������� = ���������� �������� ������
		{
			//TODO: ������ ������
			//����������
			temp->Tail->Prev->Next = NULL;
			temp->Tail = temp->Tail->Prev;
			delete list;
		}
		else
		{
			//TODO: ������ ������
			//����������
			list->Prev->Next = list->Next;
			list->Next->Prev = list->Prev;
			delete list;
		}
	}
}

void InsertPerson(PersonLab4& person, int index, PersonList4* temp)
{
	//TODO: ������������ ����������!
	// Insert ������ ��������� ����� ������� � ������, � �� �������� ������ �� ���������� �������
	//����������
	if (temp->Head == NULL || index < 0 || index > GetLength(temp->Head))//������ ������ ������� � ������� �������� ���������
	{
		return;
	}

	PersonListItem4* list = temp->Head;
	int i = 0;
	while (i < index)
	{
		list = list->Next;
		i++;
	};

	if (list == temp->Head)//���� �������� ������� = ������� �������� ������
	{
		PersonListItem4* newList = new PersonListItem4();
		newList->Person = person;
		temp->Head->Prev = newList;
		newList->Next = temp->Head;
		temp->Head = newList;
	}
	else if (list == temp->Tail)//���� �������� ������� = ���������� �������� ������
	{
		PersonListItem4* newList = new PersonListItem4();
		newList->Person = person;
		temp->Tail->Prev->Next = newList;
		newList->Prev = temp->Tail->Prev;
		newList->Next = temp->Tail;
		temp->Tail->Prev = newList;
		temp->Tail->Next = NULL;
	}
	else if (list != NULL)
	{
		PersonListItem4* newList = new PersonListItem4();
		newList->Person = person;
		list->Prev->Next = newList;
		newList->Prev = list->Prev;
		newList->Next = list;
		list->Prev = newList;
	}
}

void Clear(PersonList4* temp)
{
	PersonListItem4* list = temp->Tail;
	for (int i = GetLength(temp->Head); i > 0; i--)
	{
		if (list->Prev != NULL)
		{
			//TODO: ���� temp ������, �� ��� �� ������ ���������� � ��� ����������� ��������?
			// ��������� ������ ��� ������ Clear()? ���������!
			// ������� ����������?
			//����������
			list = list->Prev;
			delete list->Next;

		}
		else
		{
			delete list;
		}
	}
	temp->Head = NULL;
	temp->Tail = NULL;
}



