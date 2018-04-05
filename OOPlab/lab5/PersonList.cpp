#include "PersonList.h"
#include "PersonListItem.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int PersonList::GetCount()
{
	PersonListItem* temp = _head;
	_count = 0;

	if (_head == NULL)
	{
		return 0;
	}
	else
	{
		while (temp != NULL)
		{
			_count++;
			temp = temp->next;
		}
		return _count;
	}
}

void PersonList::Add(Person5* person)
{
	PersonListItem* temp = new PersonListItem;
	temp->person = *person;

	if (_head == NULL)
	{
		_head = temp;
	}
	else
	{
		PersonListItem* beforeTemp = _head;
		while (beforeTemp->next != NULL)
		{
			beforeTemp = beforeTemp->next;
		}
		beforeTemp->next = temp;
	}
}

Person5* PersonList::Find(int index)
{
	if (index >= 0 || index < GetCount())
	{
		PersonListItem* temp = _head;
		for (int i = 0; i < index; i++)
		{
			temp = temp->next;
		}
		return &temp->person;
	}
}

int PersonList::IndexOf(Person5* person)
{
	PersonListItem* temp = _head;
	for (int i = 0; i < GetCount(); i++)
	{
		if (&temp->person == person)
		{
			return i;
		}
		temp = temp->next;
	}
	return -1;
}

void PersonList::Remove(Person5* person)
{
	PersonListItem* temp = _head;
	for (int i = 0; i < GetCount(); i++)
	{
		if (&temp->person == person)
		{
			RemoveAt(i);
		}
		temp = temp->next;
	}
}

void PersonList::RemoveAt(int index)
{
	PersonListItem* temp = _head;
	int numberIndex = 0;
	if (index >= 0 && index < GetCount())//индекс должен входить в область созданых элементов
	{
		while (index != numberIndex++)
		{
			temp = temp->next;
		}

		if (temp == _head)//если выбраный элемент = первому элементу списка
		{
			if (temp->next == NULL)//если следующий элемент пустой
			{
				delete temp;
				_head = NULL;
			}
			else
			{
				_head = temp->next;
				delete temp;
			}
		}
		else if (temp->next == NULL)//если выбраный элемент = последнему элементу списка
		{
			PersonListItem* beforeTemp = _head;
			while (beforeTemp->next != temp)
			{
				beforeTemp = beforeTemp->next;
			}
			beforeTemp->next = NULL;
			delete temp;
		}
		else
		{
			PersonListItem* beforeTemp = _head;
			while (beforeTemp->next != temp)
			{
				beforeTemp = beforeTemp->next;
			}
			beforeTemp->next = temp->next;
			delete temp;
		}
	}
}

void PersonList::Clear()
{
	PersonListItem* temp = _head;
	while(temp != NULL)
	{
		if (temp->next != NULL)
		{
			PersonListItem* newTemp = temp;
			temp = temp->next;
			delete newTemp;
		}
		else
		{
			delete temp;
			break;
		}
	}
	_head = NULL;
}

void PersonList::Show()
{
	PersonListItem* temp = _head;
	if (_head == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << endl << "Фамилия: " << temp->person.Surname
				<< " | Имя: " << temp->person.Name
				<< " | Возраст: " << temp->person.Age
				<< " | Пол: " << temp->person.Sex << endl;
			temp = temp->next;
		}
	}
}

PersonList::~PersonList()
{
	Clear();
}