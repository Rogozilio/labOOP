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
//TODO: �������� ������������ ����������. Add - ���������� � ����� ������. Insert - ������� �� �������. �������������
//����������
void TemplateList<T>::Insert(T* value, int index)
{
	int countIndex = index;
	TemplateListItem<T>* temp = _head;
	TemplateListItem<T>* newTemp = new TemplateListItem<T>;
	newTemp->value = *value;

	if (_head == NULL)//���� ������ ����
	{
		temp->value = *value;
	}
	else if (index == 0)//���� ������ = 0
	{
		newTemp->nextValue = temp;
		_head = newTemp;
	}

	while (temp->nextValue != NULL && --countIndex)
	{
		temp = temp->nextValue;
	}

	if (temp->nextValue == NULL)//���� ������� ���������� � ��������� ������� ������
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
	if (index >= 0)//������ ������ ������� � ������� �������� ���������
	{
		while (index != numberIndex++)
		{
			temp = temp->nextValue;
		}

		if (temp == _head)//���� �������� ������� = ������� �������� ������
		{
			if (temp->nextValue == NULL)//���� ��������� ������� ������
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
		else if (temp->nextValue == NULL)//���� �������� ������� = ���������� �������� ������
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

//TODO: ���� ������� ���� �� ������. ����� ������ ������ �� ����� ������ �������� ����� ������ ����� Show()
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
			cout << endl << "�������: " << temp->value.Surname
			<< " | ���: " << temp->value.Name
			<< " | �������: " << temp->value.Age
			<< " | ���: " << temp->value.Sex << endl;
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