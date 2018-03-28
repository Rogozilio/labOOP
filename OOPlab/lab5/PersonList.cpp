
#include "PersonList.h"
#include "PersonListItem.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

PersonList::PersonList()
{

}

int PersonList::GetCount()
{
	PersonListItem* temp = PersonList::_head;
	PersonList::_count = 0;

	if (PersonList::_head == NULL)
	{
		return 0;
	}
	else
	{
		while (temp != NULL)
		{
			PersonList::_count++;
			temp = temp->next;
		}
		return PersonList::_count;
	}
}

void PersonList::Add(Person5* person)
{
	PersonListItem* temp = new PersonListItem;
	temp->person = *person;

	if (PersonList::_head == NULL)
	{
		PersonList::_head = temp;
	}
	else
	{
		PersonListItem* beforeTemp = PersonList::_head;
		while (beforeTemp != NULL)
		{
			beforeTemp = beforeTemp->next;
		}
		beforeTemp = temp;
	}
}

Person5* PersonList::Find(int index)
{
	PersonListItem* temp = PersonList::_head;
	for (int i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return &temp->person;
}

int PersonList::IndexOf(Person5* person)
{
	PersonListItem* temp = PersonList::_head;
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
	PersonListItem* temp = PersonList::_head;
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
	PersonListItem* temp = PersonList::_head;
	int numberIndex = 0;
	if (index >= 0 && index < GetCount())//индекс должен входить в область созданых элементов
	{
		while (index != numberIndex++)
		{
			temp = temp->next;
		}

		if (temp == PersonList::_head)//если выбраный элемент = первому элементу списка
		{
			if (temp->next == NULL)//если следующий элемент пустой
			{
				delete temp;
				PersonList::_head = NULL;
			}
			else
			{
				PersonList::_head = temp->next;
				delete temp;
			}
		}
		else if (temp->next == NULL)//если выбраный элемент = последнему элементу списка
		{
			temp = NULL;
			delete temp;
		}
		else
		{
			temp = temp->next;
			//delete temp;
		}
	}
}

void PersonList::Clear()
{
	PersonListItem* temp = PersonList::_head;
	while(temp != NULL)
	{
		if (temp->next != NULL)
		{
			PersonListItem* newTemp = temp->next;
			delete temp;
			temp = newTemp;
		}
		else
		{
			delete temp;
		}
	}
	PersonList::_head = NULL;
}

Person5 Person5::GetRandomPerson()
{
	srand(time(NULL));
	Person5 person;
	string surnames[] = { "Holiday","Jacobson","James", "Allford", "Bawerman",
		"MacAdam", "Marlow", "Bosworth", "Neal","Conors",
		"Daniels", "Parson", "Quincy", "Richards", "Fane" };
	string names[] = { "Michael","Joshua","Matthew","Ethan","Andrew",
		"Alexander", "Tyler", "James", "John","Samuel",
		"Christian","Logan","Jose","Justin","Gabriel" };
	person.Surname = surnames[rand() % 15];
	person.Name = names[rand() % 15];
	person.Age = 10 + rand() % 60;
	if ((rand() % 2) == 0)
	{
		person.Sex = Female;
	}
	else
	{
		person.Sex = Male;
	}
	return person;
}

void PersonList::Show()
{
	PersonListItem* temp = PersonList::_head;
	if (PersonList::_head == NULL)
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