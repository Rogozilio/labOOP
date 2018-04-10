#include "../lab5\Person5.h"
#include "List7.h"
#include "ListItem7.h"

template <typename T>
void List7<T>::Add(T* person)
{
	ListItem7<T>* temp = new ListItem7<T>;
	temp->person = *person;
	//cout << temp->person << person  << endl;

	if (_head == NULL)
	{
		_head = temp;
	}
	else
	{
		ListItem7<T>* beforeTemp = _head;
		while (beforeTemp->next != NULL)
		{
			beforeTemp = beforeTemp->next;
		}
		beforeTemp->next = temp;
	}
}

template <typename T>
void List7<T>::AddIndex(T* person, int index)
{
	int countIndex = index;
	ListItem7<T>* temp = _head;
	ListItem7<T>* newTemp = new ListItem7<T>;
	newTemp->person = *person;

	if (_head == NULL)//���� ������ ����
	{
		temp->person = *person;
	}
	else if (index == 0)//���� ������ = 0
	{
		newTemp->next = temp;
		_head = newTemp;
	}

	while (temp->next != NULL && --countIndex)
	{
		temp = temp->next;
	}

	if (temp->next == NULL)//���� ������� ���������� � ��������� ������� ������
	{
		temp->next = newTemp;
	}
	else
	{
		newTemp->next = temp->next;
		temp->next = newTemp;
	}
}

template <typename T>
void List7<T>::RemoveAt(int index)
{
	ListItem7<T>* temp = _head;
	int numberIndex = 0;
	if (index >= 0)//������ ������ ������� � ������� �������� ���������
	{
		while (index != numberIndex++)
		{
			temp = temp->next;
		}

		if (temp == _head)//���� �������� ������� = ������� �������� ������
		{
			if (temp->next == NULL)//���� ��������� ������� ������
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
		else if (temp->next == NULL)//���� �������� ������� = ���������� �������� ������
		{
			ListItem7<T>* beforeTemp = _head;
			while (beforeTemp->next != temp)
			{
				beforeTemp = beforeTemp->next;
			}
			beforeTemp->next = NULL;
			delete temp;
		}
		else
		{
			ListItem7<T>* beforeTemp = _head;
			while (beforeTemp->next != temp)
			{
				beforeTemp = beforeTemp->next;
			}
			beforeTemp->next = temp->next;
			delete temp;
		}
	}
}

template <typename T>
void List7<T>::Clear()
{
	ListItem7<T>* temp = _head;
	while (temp != NULL)
	{
		if (temp->next != NULL)
		{
			ListItem7<T>* newTemp = temp;
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

template <typename T>
void List7<T>::Show()
{
	ListItem7<T>* temp = _head;
	if (_head == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->person << endl;
			temp = temp->next;
		}
	}
	cout << "----------------------------------" << endl;
}

template <typename T>
void List7<T>::ShowPerson()
{
	ListItem7<T>* temp = _head;
	if (_head == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << endl << "�������: " << temp->person.Surname
			<< " | ���: " << temp->person.Name
			<< " | �������: " << temp->person.Age
			<< " | ���: " << temp->person.Sex << endl;
			temp = temp->next;
		}
	}
	cout << "----------------------------------" << endl;
}

template <typename T>
List7<T>::~List7()
{
	Clear();
}