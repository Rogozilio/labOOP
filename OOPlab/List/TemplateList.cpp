#include "../Person/Person.h"
#include "TemplateList.h"
#include "TemplateListItem.h"

template <typename T>
void TemplateList<T>::Add(T* value)
{
	TemplateListItem<T>* temp = new TemplateListItem<T>;
	temp->value = *value;

	if (_head == NULL)
	{
		_head = temp;
	}
	else
	{
		TemplateListItem<T>* beforeTemp = _head;
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
void TemplateList<T>::Insert(T* value, int index)
{
	int countIndex = index;
	TemplateListItem<T>* temp = _head;
	TemplateListItem<T>* newTemp = new TemplateListItem<T>;
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
void TemplateList<T>::RemoveAt(int index)
{
	TemplateListItem<T>* temp = _head;
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
			TemplateListItem<T>* beforeTemp = _head;
			while (beforeTemp->nextValue != temp)
			{
				beforeTemp = beforeTemp->nextValue;
			}
			beforeTemp->nextValue = NULL;
			delete temp;
		}
		else
		{
			TemplateListItem<T>* beforeTemp = _head;
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
void TemplateList<T>::Clear()
{
	TemplateListItem<T>* temp = _head;
	while (temp != NULL)
	{
		if (temp->nextValue != NULL)
		{
			TemplateListItem<T>* newTemp = temp;
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
void TemplateList<T>::Show()
{
	TemplateListItem<T>* temp = _head;
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

//TODO: Этой функции быть не должно. Вывод списка персон на экран должен работать через единый метод Show()
template <typename T>
void TemplateList<T>::ShowPerson()
{
	TemplateListItem<T>* temp = _head;
	if (_head == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			cout << endl << "Фамилия: " << temp->value.Surname
			<< " | Имя: " << temp->value.Name
			<< " | Возраст: " << temp->value.Age
			<< " | Пол: " << temp->value.Sex << endl;
			temp = temp->nextValue;
		}
	}
	cout << "----------------------------------" << endl;
}

template <typename T>
TemplateList<T>::~TemplateList()
{
	Clear();
}