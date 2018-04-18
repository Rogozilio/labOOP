#include "../Person/Person.h"
#include "List.h"
#include "ListItem.h"

template <typename T>
void List<T>::Add(T* value)
{
	ListItem<T>* temp = new ListItem<T>;
	temp->value = *value;

	if (_head == NULL)
	{
		_head = temp;
	}
	else
	{
		ListItem<T>* beforeTemp = _head;
		while (beforeTemp->nextValue != NULL)
		{
			beforeTemp = beforeTemp->nextValue;
		}
		beforeTemp->nextValue = temp;
	}
}

template <typename T>
//TODO: Нарушает общепринятое именование. Add - добавление в конец списка. Insert - вставка по индексу. Переименовать
//исправлено
void List<T>::Insert(T* value, int index)
{
	int countIndex = index;
	ListItem<T>* temp = _head;
	ListItem<T>* newTemp = new ListItem<T>;
	newTemp->value = *value;

	if (_head == NULL)//если список пуст
	{
		temp->value = *value;
	}
	else if (index == 0)//если индекс = 0
	{
		newTemp->nextValue = temp;
		_head = newTemp;
	}

	while (temp->nextValue != NULL && --countIndex)
	{
		temp = temp->nextValue;
	}

	if (temp->nextValue == NULL)//если вставка происходит в последний элемент списка
	{
		temp->nextValue = newTemp;
	}
	else
	{
		newTemp->nextValue = temp->nextValue;
		temp->nextValue = newTemp;
	}
}

template <typename T>
void List<T>::RemoveAt(int index)
{
	ListItem<T>* temp = _head;
	int numberIndex = 0;
	if (index >= 0)//индекс должен входить в область созданых элементов
	{
		while (index != numberIndex++)
		{
			temp = temp->nextValue;
		}

		if (temp == _head)//если выбраный элемент = первому элементу списка
		{
			if (temp->nextValue == NULL)//если следующий элемент пустой
			{
				delete temp;
				_head = NULL;
			}
			else
			{
				_head = temp->nextValue;
				delete temp;
			}
		}
		else if (temp->nextValue == NULL)//если выбраный элемент = последнему элементу списка
		{
			ListItem<T>* beforeTemp = _head;
			while (beforeTemp->nextValue != temp)
			{
				beforeTemp = beforeTemp->nextValue;
			}
			beforeTemp->nextValue = NULL;
			delete temp;
		}
		else
		{
			ListItem<T>* beforeTemp = _head;
			while (beforeTemp->nextValue != temp)
			{
				beforeTemp = beforeTemp->nextValue;
			}
			beforeTemp->nextValue = temp->nextValue;
			delete temp;
		}
	}
}

template <typename T>
void List<T>::Clear()
{
	ListItem<T>* temp = _head;
	while (temp != NULL)
	{
		if (temp->nextValue != NULL)
		{
			ListItem<T>* newTemp = temp;
			temp = temp->nextValue;
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
void List<T>::Show()
{
	ListItem<T>* temp = _head;
	if (_head == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->value << endl;
			temp = temp->nextValue;
		}
	}
	cout << "----------------------------------" << endl;
}

template <typename T>
List<T>::~List()
{
	Clear();
}